# require 'rubygems'
# gem 'mocha'
require 'minitest/autorun'
require 'benchmark_tests'
require 'mocha/test_unit'

class BenchmarkTest < MiniTest::Unit::TestCase

  def setup
  end

  def teardown
  end

  def test_ironruby_should_be_benchmarked
    BenchmarkTests.expects(:benchmark).with([1, 1])
    BenchmarkTests.main(1, 1)
  end
end
