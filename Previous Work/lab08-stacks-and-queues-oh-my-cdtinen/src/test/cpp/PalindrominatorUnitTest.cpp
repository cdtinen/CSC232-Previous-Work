/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Spring 2019
 *
 * @file   PalindrominatorUnitTest.cpp
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @note   DO NOT MODIFY THIS FILE!
 */

#include <algorithm>
#include <stack>
#include "PalindrominatorUnitTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(PalindrominatorUnitTest);

void PalindrominatorUnitTest::setUp() {
    TestFixture::setUp();
    appender = new Palindrominator{};
    prepender = new Palindrominator{false};
}

void PalindrominatorUnitTest::tearDown() {
    TestFixture::tearDown();
    delete appender;
    appender = nullptr;

    delete prepender;
    prepender = nullptr;
}

void PalindrominatorUnitTest::testEmptyStringWithAppenderIsPalindrome() {
    std::string message{"Appender incorrectly did not think empty string was a palindrome"};
    bool expected{true};
    bool actual{appender->isPalindrome(EMPTY_STRING)};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

void PalindrominatorUnitTest::testEmptyStringWithPrependerIsPalindrome() {
    std::string message{"Prepender incorrectly did not think empty string was a palindrome"};
    bool expected{true};
    bool actual{prepender->isPalindrome(EMPTY_STRING)};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

void PalindrominatorUnitTest::testStringOfLengthOneWithAppenderIsPalindrome() {
    std::string message{"Appender incorrectly did not think a single character was a palindrome"};
    bool expected{true};
    bool actual{appender->isPalindrome(SINGLE_CHAR_STRING)};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

void PalindrominatorUnitTest::testStringOfLengthOneWithPrependerIsPalindrome() {
    std::string message{"Prepender incorrectly did not think a single character was a palindrome"};
    bool expected{true};
    bool actual{prepender->isPalindrome(SINGLE_CHAR_STRING)};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

void PalindrominatorUnitTest::testStringOfAllSameCharsWithAppenderIsPalindrome() {
    std::string message{"Appender incorrectly did not think a string of the same characters was a palindrome"};
    bool expected{true};
    bool actual{appender->isPalindrome(SAME_CHAR_STRING)};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

void PalindrominatorUnitTest::testStringOfAllSameCharsWithPrependerIsPalindrome() {
    std::string message{"Prepender incorrectly did not think a string of the same characters was a palindrome"};
    bool expected{true};
    bool actual{prepender->isPalindrome(SAME_CHAR_STRING)};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

void PalindrominatorUnitTest::testNonPalindromeWithAppender() {
    std::string message{"Appender incorrectly thought a non-palindrome was in fact a palindrome"};
    bool expected{false};
    bool actual{appender->isPalindrome(NON_PALINDROME)};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

void PalindrominatorUnitTest::testNonPalindromeWithPrepender() {
    std::string message{"Prepender incorrectly thought a non-palindrome was in fact a palindrome"};
    bool expected{false};
    bool actual{prepender->isPalindrome(NON_PALINDROME)};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

void PalindrominatorUnitTest::testPalindromeEvenLengthWithAppender() {
    std::string message{"Appender incorrectly did not think an even-length palindrome was a palindrome"};
    bool expected{true};
    bool actual{appender->isPalindrome(EVEN_LENGTH_PALINDROME)};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

void PalindrominatorUnitTest::testPalindromeEvenLengthWithPrepender() {
    std::string message{"Prepender incorrectly did not think an even-length palindrome was a palindrome"};
    bool expected{true};
    bool actual{prepender->isPalindrome(EVEN_LENGTH_PALINDROME)};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

void PalindrominatorUnitTest::testPalindromeOddLengthWithAppender() {
    std::string message{"Appender incorrectly did not think an odd-length palindrome was a palindrome"};
    bool expected{true};
    bool actual{appender->isPalindrome(ODD_LENGTH_PALINDROME)};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

void PalindrominatorUnitTest::testPalindromeOddLengthWithPrepender() {
    std::string message{"Prepender incorrectly did not think an odd-length palindrome was a palindrome"};
    bool expected{true};
    bool actual{prepender->isPalindrome(ODD_LENGTH_PALINDROME)};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

void PalindrominatorUnitTest::testAppenderGeneratesPalindrome() {
    std::string message{"Appender did not generate a palindrome in the expected format"};
    std::stringstream ss;
    ss << NON_PALINDROME << reverse(NON_PALINDROME);
    std::string expected{ss.str()};
    std::string actual{appender->makePalindrome(NON_PALINDROME)};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

void PalindrominatorUnitTest::testPrependerGeneratesPalindrome() {
    std::string message{"Prepender did not generate a palindrome in the expected format"};
    std::stringstream ss;
    ss << reverse(NON_PALINDROME) << NON_PALINDROME;
    std::string expected{ss.str()};
    std::string actual{prepender->makePalindrome(NON_PALINDROME)};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

std::string PalindrominatorUnitTest::reverse(std::string text) const {
    // NOTE: DO NOT copy this technique for reversing a string into your own code as you are instructed to use a stack
    // to do the string reversal. Copying this technique will result in a loss of points! You have been warned!
    std::reverse(text.begin(), text.end());
    return text;
}
