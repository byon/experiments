require 'fileutils'

class GenerationException < Exception
end

class GenerateRubyTests

  def self.main(file_count, method_count)
    check_target_directory
    generate(file_count.to_i, method_count.to_i)
  end

  private

  DIRECTORY = 'generated/ruby'

  def self.check_target_directory
    if File.exists? DIRECTORY
      raise GenerationException, "#{DIRECTORY} already exists"
    end
    FileUtils::mkdir_p DIRECTORY
  end

  def self.generate(file_count, method_count)
    for i in 1..file_count do
      name = "Some#{i}"
      open(File.join(DIRECTORY, "#{name}_test.rb"), 'w') do |file|
        contents = TestClass.new(name).generate(method_count)
        file.write(contents)
      end
    end
  end
end

class TestClass
  def initialize(name)
    @name = name
  end
  def generate(method_count)
    if method_count <= 0
      raise GenerationException, "At least one method required"
    end
    "require 'test/unit'\n" +
      "class #{@name}Test < Test::Unit::TestCase\n" +
      generate_methods(method_count) +
      "end\n"
  end

  private

  def generate_methods(method_count)
    (1..method_count).map { |i| "def test_#{i}() end" }.join("\n") + "\n"
  end
end

if __FILE__==$0
  begin
    GenerateRubyTests::main(*ARGV)
    exit(0)
  rescue GenerationException => e
    puts e.message
  end
  exit(1)
end
