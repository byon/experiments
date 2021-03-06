require 'fileutils'
include System::Diagnostics

class Benchmark

  def main(arguments)
    count = arguments[0].to_i
    print_header
    run_benchmark(count) { |c| benchmark_cost_of_test_suite(c) }
    run_benchmark(count) { |c| benchmark_cost_of_test(c) }
    run_benchmark(count) { |c| benchmark_an_average_test_set(c) }
  end

  def run_benchmark(count)
    yield 1
    count.times do |i|
      base = 10 ** i
      (1..5).each do |j|
        yield base * j * 2
      end
    end
  end

  def benchmark_cost_of_test_suite(method_count)
    benchmark_tests(1, method_count)
  end

  def benchmark_cost_of_test(file_count)
    benchmark_tests(file_count, 1)
  end

  def benchmark_an_average_test_set(file_count)
    benchmark_tests(file_count, 20)
  end

  def print_header
    puts "file_count | method count | elapsed s | average s / test | average s / file"
  end

  def benchmark_tests(file_count, method_count)
    ensure_old_tests_are_gone
    elapsed_seconds = measure_tests(file_count, method_count)
    average_per_test = "%.10f" % (elapsed_seconds / (file_count * method_count))
    average_per_file = "%.10f" % (elapsed_seconds / file_count)
    puts "#{file_count} | #{method_count} | #{elapsed_seconds} | " +
      "#{average_per_test} | #{average_per_file}"
  end

  def ensure_old_tests_are_gone
    FileUtils::rm_rf('generated')
  end

  def measure_tests(file_count, method_count)
    run_tests = generate_tests(file_count, method_count)
    stopwatch = Stopwatch.new
    stopwatch.start
    run_tests.call
    stopwatch.stop
    return stopwatch.elapsed.total_seconds
  end

  def generate_tests(file_count, method_count)
    generate_test_files(file_count, method_count)
    return create_test_runner
  end

  def create_test_runner
    return lambda { run_test(test_directory) }
  end
end
