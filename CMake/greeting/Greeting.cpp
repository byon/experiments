#include "Greeting.hpp"
#include "boost/date_time/gregorian/gregorian.hpp"

std::string Greeting()
{
    using namespace boost::gregorian;

    return "Hello world on " + to_simple_string(day_clock::local_day());
}
