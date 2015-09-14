require 'benchmark_common'

class BenchmarkRubyTests < Benchmark

  def generate_test_files(file_count, method_count)
    GenerateRubyTests::main(file_count, method_count)
  end

  def run_test(test_directory)
    `ir64 run_tests.rb #{test_directory}`
  end

  def test_directory
    'generated/ruby'
  end
end

BenchmarkRubyTests.new.main(ARGV)
