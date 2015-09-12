test_directory = ARGV.size > 0 ? ARGV[0] : './tests/'
$LOAD_PATH.unshift(test_directory)
$LOAD_PATH.unshift("#{File.dirname(__FILE__)}/lib")
test_files = Dir.glob(File.join(test_directory, '*_test.rb'))
test_files.each { |file| require File.basename(file)}
