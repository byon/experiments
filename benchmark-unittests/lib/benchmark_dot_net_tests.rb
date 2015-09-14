require 'benchmark_common'
require 'generate_dotnet_tests'

class BenchmarkDotNetTests < Benchmark

  def generate_test_files(file_count, method_count)
    GenerateDotNetTests::main(file_count, method_count)
    solution_path = File.join(test_directory, 'DotNetTestTemplate.sln')
    `msbuild #{solution_path} /v:minimal /p:Configuration=Release`
  end

  def run_test(test_directory)
    target_dll = File.join(test_directory, 'bin/Release/DotNetTestTemplate.dll')
    `VSTest.console.exe #{target_dll}`
  end

  def test_directory
    'generated/csharp/'
  end
end

BenchmarkDotNetTests.new.main(ARGV)
