require 'minitest/autorun'
require 'generate_ruby_tests'

class GenerateRubyTestsTest < MiniTest::Unit::TestCase

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
    assert File.directory?(DIRECTORY), 'No directory for tests'
  end

  def test_one_test_file_should_be_created_based_on_argument
    test(1)
    assert_equal 1, generated_file_count
  end

  def test_several_test_files_should_be_created_based_on_argument
    test(10)
    assert_equal 10, generated_file_count
  end

  def test_generated_test_file_can_be_executed
    test(1)
    assert_match(/^1 tests/, run_test(generated_file_paths[0]))
  end

  private

  ROOT = 'generated'
  DIRECTORY = "#{ROOT}/ruby"

  def ensure_target_is_cleaned
    FileUtils::rm_rf ROOT
  end

  def test(file_count=1, method_count=1)
    GenerateRubyTests::main(file_count.to_s, method_count.to_s)
  end

  def generated_file_paths
    Dir.glob("#{DIRECTORY}/*_test.rb")
  end

  def generated_file_count
    generated_file_paths.size
  end

  def run_test(path)
    `#{RbConfig::CONFIG['ruby_install_name']} #{path}`
  end
end

class TestClassTest < MiniTest::Unit::TestCase

  def test_generation_should_create_class
    assert_match('class FooTest', test(name: 'Foo'))
  end

  def test_generation_should_include_test_library
    assert_match("require 'test/unit'", test)
  end

  def test_generated_class_should_be_a_test_class
    assert_match(/class .*Test < Test::Unit::TestCase/, test)
  end

  def test_generating_zero_methods_is_an_error
    assert_raises(GenerationException) { test(method_count: 0) }
  end

  def test_generating_one_method
    assert_match(/def test_1\(\) end/, test(method_count:1))
  end

  def test_generating_methods_should_have_increasing_id
    assert_match(/def test_2\(\) end/, test(method_count:2))
  end

  def test_generating_multiple_methods
    assert_equal(20, test(method_count:20).scan(/def test_\d+/).size)
  end

  private

  def test(options={})
    name = options[:name] || 'Meaningless'
    method_count = options[:method_count] || 1
    TestClass.new(name).generate(method_count)
  end
end
