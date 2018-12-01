#include "stdafx.h"
#include "LibraryToTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Microsoft
{
namespace VisualStudio
{
namespace CppUnitTestFramework
{

template<>
static std::wstring ToString<std::vector<int>>(const class std::vector<int>& source);
template<>
static std::wstring ToString<std::map<std::wstring, int>>(const class std::map<std::wstring, int>& source);

}
}
}

TEST_CLASS(TestLibraryToTest)
{
public:

    TEST_METHOD(SuccessfulIntegerComparison)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(FailingIntegerComparison)
    {
        Assert::AreEqual(1234, SumOfNumbers(12, 34));
    }

    TEST_METHOD(SuccessfulStringComparison)
    {
        Assert::AreEqual(std::wstring(L"uhuhhuh"), CombineStrings(L"uh", L"uhhuh"));
    }

    TEST_METHOD(FailingStringComparison)
    {
        Assert::AreEqual(std::wstring(L"öh"), CombineStrings(L"uh", L"uhhuh"));
    }

    TEST_METHOD(SuccessfulVectorComparison)
    {
        Assert::AreEqual({ 12, 3, 4 }, CombineVectors(std::vector<int>({ 12 }), std::vector<int>({ 3, 4 })));
    }

    TEST_METHOD(FailingVectorComparison)
    {
        Assert::AreEqual({ 1, 2, 3, 4 }, CombineVectors(std::vector<int>({ 12 }), std::vector<int>({ 3, 4 })));
    }

    TEST_METHOD(SuccessfulMapComparison)
    {
        std::map<std::wstring, int> first = { { L"A", 12 } };
        std::map<std::wstring, int> second = { { L"B", 34 } };
        Assert::AreEqual({ {L"A", 12}, {L"B", 34} }, CombineMaps(first, second));
    }

    TEST_METHOD(FailingMapComparison)
    {
        std::map<std::wstring, int> first = { { L"A", 12 } };
        std::map<std::wstring, int> second = { { L"B", 34 } };
        Assert::AreEqual({ {L"AB", 46} }, CombineMaps(first, second));
    }
};

namespace Microsoft
{
namespace VisualStudio
{
namespace CppUnitTestFramework
{

template<>
static std::wstring ToString<std::vector<int>>(const class std::vector<int>& source)
{
    if (source.empty()) return L"";

    std::wostringstream stream;
    std::copy(source.begin(), source.end() - 1, std::ostream_iterator<int, wchar_t>(stream, L", "));
    stream << source.back();

    return stream.str();
}

std::wostream& operator<<(std::wostream& stream, std::pair<std::wstring, std::pair<std::wstring, int>> const& pair) {
    return stream << pair.first << " " << pair.second.first << " " << pair.second.second;
}

template<>
static std::wstring ToString<std::map<std::wstring, int>>(const class std::map<std::wstring, int>& source)
{
    std::wostringstream stream;
    stream << "{ ";
    for each (auto i in source)
    {
        stream << "{ " << i.first << " : " << i.second << " } ";
    }
    stream << "}";
    return stream.str();
}

}
}
}
