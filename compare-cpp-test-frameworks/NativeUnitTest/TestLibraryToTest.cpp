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

    BEGIN_TEST_METHOD_ATTRIBUTE(FailingIntegerComparison)
        TEST_IGNORE()
    END_TEST_METHOD_ATTRIBUTE()
    TEST_METHOD(FailingIntegerComparison)
    {
        Assert::AreEqual(1234, SumOfNumbers(12, 34));
    }

    TEST_METHOD(SuccessfulStringComparison)
    {
        Assert::AreEqual(std::wstring(L"uhuhhuh"), CombineStrings(L"uh", L"uhhuh"));
    }

    BEGIN_TEST_METHOD_ATTRIBUTE(FailingStringComparison)
        TEST_IGNORE()
    END_TEST_METHOD_ATTRIBUTE()
    TEST_METHOD(FailingStringComparison)
    {
        Assert::AreEqual(std::wstring(L"öh"), CombineStrings(L"uh", L"uhhuh"));
    }

    TEST_METHOD(SuccessfulVectorComparison)
    {
        Assert::AreEqual({ 12, 3, 4 }, CombineVectors(std::vector<int>({ 12 }), std::vector<int>({ 3, 4 })));
    }

    BEGIN_TEST_METHOD_ATTRIBUTE(FailingVectorComparison)
        TEST_IGNORE()
    END_TEST_METHOD_ATTRIBUTE()
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

    BEGIN_TEST_METHOD_ATTRIBUTE(FailingMapComparison)
        TEST_IGNORE()
    END_TEST_METHOD_ATTRIBUTE()
    TEST_METHOD(FailingMapComparison)
    {
        std::map<std::wstring, int> first = { { L"A", 12 } };
        std::map<std::wstring, int> second = { { L"B", 34 } };
        Assert::AreEqual({ {L"AB", 46} }, CombineMaps(first, second));
    }

    TEST_METHOD(GeneratedTest1)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest2)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest3)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest4)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest5)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest6)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest7)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest8)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest9)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest10)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest11)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest12)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest13)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest14)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest15)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest16)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest17)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest18)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest19)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest20)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest21)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest22)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest23)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest24)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest25)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest26)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest27)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest28)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest29)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest30)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest31)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest32)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest33)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest34)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest35)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest36)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest37)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest38)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest39)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest40)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest41)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest42)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest43)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest44)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest45)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest46)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest47)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest48)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest49)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest50)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest51)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest52)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest53)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest54)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest55)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest56)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest57)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest58)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest59)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest60)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest61)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest62)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest63)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest64)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest65)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest66)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest67)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest68)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest69)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest70)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest71)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest72)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest73)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest74)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest75)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest76)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest77)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest78)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest79)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest80)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest81)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest82)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest83)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest84)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest85)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest86)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest87)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest88)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest89)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest90)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest91)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest92)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest93)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest94)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest95)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest96)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest97)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest98)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest99)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest100)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest101)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest102)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest103)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest104)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest105)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest106)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest107)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest108)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest109)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest110)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest111)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest112)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest113)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest114)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest115)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest116)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest117)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest118)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest119)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest120)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest121)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest122)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest123)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest124)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest125)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest126)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest127)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest128)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest129)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest130)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest131)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest132)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest133)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest134)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest135)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest136)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest137)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest138)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest139)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest140)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest141)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest142)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest143)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest144)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest145)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest146)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest147)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest148)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest149)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest150)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest151)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest152)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest153)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest154)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest155)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest156)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest157)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest158)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest159)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest160)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest161)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest162)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest163)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest164)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest165)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest166)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest167)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest168)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest169)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest170)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest171)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest172)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest173)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest174)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest175)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest176)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest177)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest178)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest179)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest180)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest181)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest182)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest183)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest184)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest185)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest186)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest187)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest188)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest189)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest190)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest191)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest192)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest193)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest194)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest195)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest196)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest197)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest198)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest199)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest200)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest201)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest202)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest203)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest204)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest205)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest206)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest207)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest208)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest209)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest210)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest211)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest212)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest213)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest214)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest215)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest216)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest217)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest218)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest219)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest220)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest221)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest222)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest223)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest224)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest225)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest226)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest227)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest228)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest229)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest230)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest231)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest232)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest233)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest234)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest235)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest236)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest237)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest238)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest239)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest240)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest241)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest242)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest243)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest244)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest245)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest246)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest247)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest248)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest249)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest250)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest251)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest252)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest253)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest254)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest255)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest256)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest257)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest258)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest259)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest260)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest261)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest262)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest263)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest264)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest265)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest266)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest267)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest268)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest269)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest270)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest271)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest272)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest273)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest274)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest275)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest276)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest277)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest278)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest279)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest280)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest281)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest282)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest283)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest284)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest285)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest286)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest287)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest288)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest289)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest290)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest291)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest292)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest293)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest294)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest295)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest296)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest297)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest298)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest299)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest300)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest301)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest302)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest303)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest304)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest305)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest306)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest307)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest308)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest309)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest310)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest311)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest312)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest313)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest314)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest315)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest316)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest317)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest318)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest319)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest320)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest321)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest322)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest323)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest324)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest325)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest326)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest327)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest328)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest329)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest330)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest331)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest332)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest333)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest334)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest335)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest336)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest337)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest338)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest339)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest340)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest341)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest342)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest343)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest344)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest345)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest346)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest347)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest348)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest349)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest350)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest351)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest352)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest353)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest354)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest355)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest356)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest357)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest358)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest359)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest360)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest361)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest362)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest363)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest364)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest365)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest366)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest367)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest368)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest369)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest370)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest371)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest372)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest373)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest374)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest375)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest376)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest377)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest378)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest379)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest380)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest381)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest382)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest383)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest384)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest385)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest386)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest387)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest388)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest389)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest390)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest391)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest392)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest393)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest394)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest395)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest396)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest397)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest398)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest399)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest400)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest401)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest402)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest403)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest404)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest405)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest406)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest407)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest408)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest409)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest410)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest411)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest412)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest413)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest414)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest415)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest416)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest417)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest418)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest419)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest420)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest421)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest422)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest423)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest424)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest425)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest426)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest427)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest428)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest429)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest430)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest431)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest432)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest433)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest434)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest435)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest436)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest437)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest438)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest439)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest440)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest441)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest442)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest443)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest444)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest445)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest446)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest447)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest448)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest449)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest450)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest451)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest452)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest453)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest454)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest455)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest456)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest457)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest458)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest459)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest460)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest461)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest462)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest463)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest464)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest465)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest466)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest467)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest468)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest469)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest470)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest471)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest472)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest473)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest474)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest475)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest476)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest477)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest478)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest479)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest480)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest481)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest482)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest483)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest484)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest485)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest486)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest487)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest488)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest489)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest490)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest491)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest492)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest493)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest494)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest495)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest496)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest497)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest498)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest499)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest500)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest501)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest502)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest503)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest504)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest505)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest506)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest507)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest508)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest509)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest510)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest511)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest512)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest513)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest514)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest515)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest516)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest517)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest518)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest519)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest520)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest521)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest522)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest523)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest524)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest525)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest526)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest527)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest528)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest529)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest530)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest531)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest532)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest533)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest534)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest535)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest536)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest537)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest538)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest539)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest540)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest541)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest542)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest543)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest544)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest545)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest546)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest547)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest548)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest549)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest550)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest551)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest552)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest553)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest554)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest555)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest556)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest557)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest558)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest559)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest560)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest561)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest562)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest563)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest564)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest565)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest566)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest567)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest568)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest569)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest570)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest571)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest572)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest573)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest574)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest575)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest576)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest577)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest578)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest579)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest580)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest581)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest582)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest583)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest584)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest585)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest586)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest587)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest588)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest589)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest590)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest591)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest592)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest593)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest594)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest595)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest596)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest597)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest598)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest599)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest600)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest601)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest602)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest603)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest604)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest605)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest606)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest607)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest608)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest609)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest610)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest611)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest612)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest613)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest614)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest615)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest616)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest617)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest618)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest619)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest620)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest621)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest622)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest623)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest624)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest625)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest626)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest627)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest628)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest629)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest630)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest631)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest632)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest633)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest634)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest635)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest636)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest637)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest638)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest639)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest640)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest641)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest642)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest643)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest644)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest645)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest646)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest647)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest648)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest649)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest650)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest651)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest652)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest653)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest654)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest655)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest656)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest657)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest658)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest659)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest660)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest661)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest662)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest663)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest664)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest665)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest666)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest667)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest668)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest669)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest670)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest671)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest672)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest673)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest674)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest675)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest676)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest677)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest678)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest679)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest680)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest681)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest682)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest683)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest684)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest685)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest686)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest687)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest688)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest689)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest690)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest691)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest692)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest693)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest694)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest695)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest696)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest697)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest698)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest699)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest700)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest701)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest702)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest703)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest704)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest705)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest706)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest707)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest708)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest709)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest710)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest711)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest712)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest713)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest714)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest715)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest716)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest717)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest718)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest719)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest720)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest721)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest722)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest723)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest724)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest725)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest726)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest727)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest728)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest729)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest730)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest731)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest732)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest733)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest734)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest735)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest736)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest737)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest738)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest739)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest740)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest741)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest742)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest743)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest744)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest745)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest746)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest747)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest748)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest749)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest750)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest751)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest752)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest753)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest754)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest755)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest756)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest757)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest758)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest759)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest760)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest761)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest762)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest763)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest764)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest765)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest766)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest767)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest768)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest769)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest770)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest771)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest772)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest773)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest774)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest775)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest776)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest777)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest778)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest779)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest780)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest781)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest782)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest783)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest784)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest785)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest786)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest787)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest788)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest789)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest790)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest791)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest792)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest793)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest794)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest795)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest796)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest797)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest798)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest799)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest800)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest801)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest802)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest803)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest804)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest805)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest806)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest807)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest808)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest809)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest810)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest811)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest812)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest813)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest814)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest815)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest816)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest817)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest818)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest819)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest820)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest821)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest822)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest823)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest824)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest825)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest826)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest827)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest828)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest829)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest830)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest831)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest832)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest833)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest834)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest835)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest836)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest837)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest838)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest839)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest840)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest841)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest842)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest843)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest844)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest845)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest846)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest847)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest848)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest849)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest850)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest851)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest852)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest853)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest854)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest855)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest856)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest857)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest858)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest859)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest860)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest861)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest862)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest863)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest864)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest865)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest866)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest867)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest868)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest869)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest870)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest871)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest872)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest873)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest874)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest875)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest876)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest877)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest878)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest879)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest880)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest881)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest882)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest883)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest884)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest885)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest886)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest887)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest888)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest889)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest890)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest891)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest892)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest893)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest894)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest895)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest896)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest897)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest898)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest899)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest900)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest901)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest902)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest903)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest904)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest905)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest906)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest907)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest908)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest909)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest910)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest911)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest912)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest913)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest914)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest915)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest916)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest917)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest918)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest919)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest920)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest921)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest922)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest923)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest924)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest925)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest926)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest927)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest928)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest929)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest930)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest931)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest932)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest933)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest934)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest935)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest936)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest937)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest938)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest939)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest940)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest941)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest942)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest943)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest944)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest945)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest946)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest947)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest948)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest949)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest950)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest951)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest952)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest953)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest954)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest955)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest956)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest957)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest958)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest959)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest960)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest961)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest962)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest963)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest964)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest965)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest966)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest967)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest968)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest969)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest970)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest971)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest972)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest973)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest974)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest975)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest976)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest977)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest978)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest979)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest980)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest981)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest982)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest983)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest984)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest985)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest986)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest987)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest988)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest989)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest990)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest991)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest992)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest993)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest994)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest995)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest996)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest997)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest998)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest999)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
    }

    TEST_METHOD(GeneratedTest1000)
    {
        Assert::AreEqual(46, SumOfNumbers(12, 34));
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
