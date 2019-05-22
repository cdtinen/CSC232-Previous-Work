/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Spring 2019
 *
 * @file   PalindrominatorUnitTest.h
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @note   DO NOT MODIFY THIS FILE!
 */

#ifndef LAB08_PALINDROMINATORUNITTEST_H
#define LAB08_PALINDROMINATORUNITTEST_H

#include <cppunit/extensions/HelperMacros.h>
#include "../../main/cpp/Palindrominator.h"

using CPPUNIT_NS::TestFixture;

class PalindrominatorUnitTest : public TestFixture {
CPPUNIT_TEST_SUITE(PalindrominatorUnitTest);
        CPPUNIT_TEST(testEmptyStringWithAppenderIsPalindrome);
        CPPUNIT_TEST(testEmptyStringWithPrependerIsPalindrome);
        CPPUNIT_TEST(testStringOfLengthOneWithAppenderIsPalindrome);
        CPPUNIT_TEST(testStringOfLengthOneWithPrependerIsPalindrome);
        CPPUNIT_TEST(testStringOfAllSameCharsWithAppenderIsPalindrome);
        CPPUNIT_TEST(testStringOfAllSameCharsWithPrependerIsPalindrome);
        CPPUNIT_TEST(testNonPalindromeWithAppender);
        CPPUNIT_TEST(testNonPalindromeWithPrepender);
        CPPUNIT_TEST(testPalindromeEvenLengthWithAppender);
        CPPUNIT_TEST(testPalindromeEvenLengthWithPrepender);
        CPPUNIT_TEST(testPalindromeOddLengthWithAppender);
        CPPUNIT_TEST(testPalindromeOddLengthWithPrepender);
        CPPUNIT_TEST(testAppenderGeneratesPalindrome);
        CPPUNIT_TEST(testPrependerGeneratesPalindrome);
    CPPUNIT_TEST_SUITE_END();
public:
    /**
     * Default constructor.
     */
    PalindrominatorUnitTest() = default;

    /**
     * Default destructor.
     */
    ~PalindrominatorUnitTest() = default;

    /**
     * Operation to execute before each CPPUNIT_TEST.
     */
    void setUp() override;

    /**
     * Operation to execute after each CPPUNIT_TEST.
     */
    void tearDown() override;

    /**
     * Validate that an empty string is indeed a palindrome using the appender.
     */
    void testEmptyStringWithAppenderIsPalindrome();

    /**
     * Validate that an empty string is indeed a palindrome using the prepender.
     */
    void testEmptyStringWithPrependerIsPalindrome();

    /**
     * Validate that a string of length one is indeed a palindrome using the appender.
     */
    void testStringOfLengthOneWithAppenderIsPalindrome();

    /**
     * Validate that a string of length one is indeed a palindrome using the prepender.
     */
    void testStringOfLengthOneWithPrependerIsPalindrome();

    /**
     * Validate that a string of all the same characters is indeed a palindrome using the appender.
     */
    void testStringOfAllSameCharsWithAppenderIsPalindrome();

    /**
     * Validate that a string of all the same characters is indeed a palindrome using the prepender.
     */
    void testStringOfAllSameCharsWithPrependerIsPalindrome();

    /**
     * Validate that a string that isn't a palindrome indeed is not a palindrome using the appender.
     */
    void testNonPalindromeWithAppender();

    /**
     * Validate that a string that isn't a palindrome indeed is not a palindrome using the prepender.
     */
    void testNonPalindromeWithPrepender();

    /**
     * Validate that a palindrome of even length is indeed a palindrome using the appender.
     */
    void testPalindromeEvenLengthWithAppender();

    /**
     * Validate that a palindrome of even length is indeed a palindrome using the prepender.
     */
    void testPalindromeEvenLengthWithPrepender();

    /**
     * Validate that a palindrome of odd length is indeed a palindrome using the appender.
     */
    void testPalindromeOddLengthWithAppender();

    /**
     * Validate that a palindrome of odd length is indeed a palindrome using the prepender.
     */
    void testPalindromeOddLengthWithPrepender();

    /**
     * Validate that the default Palindrominator generates a palindrome of the proper structure.
     */
    void testAppenderGeneratesPalindrome();

    /**
     * Validate that the overriden generator behavior genereates a palindrom of the proper structure.
     */
    void testPrependerGeneratesPalindrome();

private:
    /**
     * A pointer to a Palindrome utility configured with default behavior.
     */
    Palindrome *appender;

    /**
     * A pointer to a Palindrome utility configured with overriden behavior.
     */
    Palindrome *prepender;

    /** Some useful named constants to use and reuse in our test suite. */
    const std::string EMPTY_STRING{};
    const std::string SINGLE_CHAR_STRING{"a"};
    const std::string SAME_CHAR_STRING{"aaaaa"};
    const std::string NON_PALINDROME{"abc"};
    const std::string EVEN_LENGTH_PALINDROME{"abba"};
    const std::string ODD_LENGTH_PALINDROME{"abcba"};

    /**
     * Helper method that reverses a string.
     * @param text the text to be reversed
     * @return A copy of the given text in reverse order is returned.
     * @post The actual parameter is unchanged since we pass by value.
     */
    std::string reverse(std::string text) const;
};

#endif // LAB08_PALINDROMINATORUNITTEST_H
