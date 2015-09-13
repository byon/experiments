require 'fileutils'
require 'rexml/document'
include REXML

class GenerationException < Exception
end

class GenerateDotNetTests

  def self.main(file_count, method_count)
    check_target_directory
    generate_project(file_count.to_i)
    generate(file_count.to_i, method_count.to_i)
  end

  private

  ROOT = 'generated'
  DIRECTORY = "#{ROOT}/csharp"
  PROJECT = "#{DIRECTORY}/DotNetTestTemplate.csproj"

  def self.check_target_directory
    if File.exists? DIRECTORY
      raise GenerationException, "#{DIRECTORY} already exists"
    end
    FileUtils::mkdir_p ROOT
  end

  def self.generate_project(file_count)
    FileUtils::cp_r('DotNetTestTemplate', DIRECTORY)
    update_project_file(file_count)
  end

  def self.update_project_file(file_count)
    document = Document.new(File.read(PROJECT))
    remove_example_file(document)
    add_test_files_to_project(document, file_count)
    open(PROJECT, 'w') { |file| document.write(file) }
  end

  def self.remove_example_file(document)
    xpath = "//ItemGroup/Compile[@Include='Example.cs']"
    document.root.delete_element(xpath)
  end

  def self.add_test_files_to_project(document, file_count)
    element = XPath.first(document, '//ItemGroup')
    test_files(file_count).each do |file|
      file_element = Element.new('Compile')
      file_element.add_attribute('Include', file)
      element.add_element(file_element)
    end
  end

  def self.generate(file_count, method_count)
    test_names(file_count).each do |name|
      open(File.join(DIRECTORY, "#{test_file_name(name)}"), 'w') do |file|
        contents = TestDotNetClass.new(name).generate(method_count)
        file.write(contents)
      end
    end
  end

  def self.test_names(file_count)
    (1..file_count).map { |i| "Some#{i}Test" }
  end

  def self.test_files(file_count)
    test_names(file_count).map! { |t| test_file_name(t) }
  end

  def self.test_file_name(test_name)
    test_name + '.cs'
  end
end

class TestDotNetClass
  def initialize(name)
    @name = name
  end
  def generate(method_count)
    if method_count <= 0
      raise GenerationException, "At least one method required"
    end
    "using Microsoft.VisualStudio.TestTools.UnitTesting;\n" +
      "[TestClass] public class #{@name}\n" +
      "{\n" +
      generate_methods(method_count) +
      "}\n"
  end

  private

  def generate_methods(method_count)
    methods = (1..method_count).map do |i|
      "[TestMethod] public void Test#{i}(){}\n"
    end
    methods.join("\n") + "\n"
  end
end

if __FILE__==$0
  begin
    GenerateDotNetTests::main(*ARGV)
    exit(0)
  rescue GenerationException => e
    puts e.message
  end
  exit(1)
end
