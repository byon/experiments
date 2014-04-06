#ifndef TUTORIAL_DATE_HPP_INCLUDED
#define TUTORIAL_DATE_HPP_INCLUDED

#ifdef DATE_LIBRARY_BUILD
#define DATE_LIBRARY_EXPORT __declspec(dllexport)
#else
#define DATE_LIBRARY_EXPORT __declspec(dllimport)
#endif

#include <string>

DATE_LIBRARY_EXPORT std::string Date();

#endif