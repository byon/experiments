#include "Date.hpp"
#include "boost/date_time/gregorian/gregorian.hpp"

std::string Date()
{
    using namespace boost::gregorian;

    return to_simple_string(day_clock::local_day());
}
