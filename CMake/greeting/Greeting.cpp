#include "greeting/Greeting.hpp"
#include "date/Date.hpp"

std::string Greeting()
{
    return "Hello world on " + Date();
}
