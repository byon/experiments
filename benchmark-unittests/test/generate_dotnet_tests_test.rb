require 'minitest/autorun'
require 'generate_dotnet_tests'
require 'rexml/document'
include REXML

class GenerateDotNetTestsTest < MiniTest::Unit::TestCase

  def setup
    ensure_target_is_cleaned
  end

  def teardown
    ensure_target_is_cleaned
  end

  def test_generation_should_create_directory_for_tests
    test
    assert File.directory?(DIRECTORY), 'No directory for tests'
  end

  def test_generation_should_fail_if_directory_exists
    FileUtils::mkdir_p DIRECTORY
    assert_raises( GenerationException ) { test }
  end

  def test_generation_should_create_solution
    test
    assert File.exists?(SOLUTION), 'No solution for tests'
    assert File.exists?(PROJECT), 'No project for tests'
  end

  def test_one_test_file_should_be_created_based_on_argument
    test(1)
    assert_equal 1, generated_file_count
  end

  def test_several_test_files_should_be_created_based_on_argument
    test(10)
    assert_equal 10, generated_file_count
  end

  def test_example_should_be_replaced_by_generated_file
    test(1)
    assert_includes files_in_project, 'Some1Test.cs'
  end

  def test_generated_test_file_can_be_executed
    test(1)
    assert_match(/Total tests: 1. Passed: 1/, run_test(generated_file_paths[0]))
  end

  private

  ROOT = 'generated'
  DIRECTORY = "#{ROOT}/csharp/"
  BASE_NAME = 'DotNetTestTemplate'
  SOLUTION = "#{DIRECTORY}/#{BASE_NAME}.sln"
  PROJECT = "#{DIRECTORY}/#{BASE_NAME}.csproj"
  TARGET_DLL = "#{File.join(DIRECTORY, 'bin/Debug/DotNetTestTemplate.dll')}"

  def ensure_target_is_cleaned
    FileUtils::rm_rf ROOT
  end

  def generated_file_paths
    Dir.glob("#{DIRECTORY}/*Test.cs")
  end

  def generated_file_count
    generated_file_paths.size
  end

  def files_in_project
    open(PROJECT, 'r') do |file|
      document = Document.new(file)
      XPath.match(document, "//ItemGroup/Compile").map do |e|
        e.attribute('Include').value
      end
    end
  end

  def test(file_count=1, method_count=1)
    GenerateDotNetTests::main(file_count.to_s, method_count.to_s)
  end

  def run_test(path)
    `msbuild #{SOLUTION}`
    `VSTest.console.exe #{TARGET_DLL}`
  end
end

class TestDotNetClassTest < MiniTest::Unit::TestCase

  def test_generation_should_include_test_library
    assert_match(/using Microsoft.VisualStudio.TestTools.UnitTesting;/, test)
  end

  def test_generation_should_create_test_class
    assert_match(/\[TestClass\] public class Foo/, test(name: 'Foo'))
  end

  def test_generating_zero_methods_is_an_error
    assert_raises(GenerationException) { test(method_count: 0) }
  end

  def test_generating_one_method
    assert_match(/\[TestMethod\] public void Test1\(\)\{\}/, test(method_count:1))
  end

  def test_generating_methods_should_have_increasing_id
    assert_match(/public void Test2/, test(method_count:2))
  end

  def test_generating_multiple_methods
    assert_equal(20, test(method_count:20).scan(/void Test\d+/).size)
  end

  private

  def test(options={})
    name = options[:name] || 'Meaningless'
    method_count = options[:method_count] || 1
    TestDotNetClass.new(name).generate(method_count)
  end

end
