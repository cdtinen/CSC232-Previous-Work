/**
 * CSC232 Data Structures
 * Missouri State University
 *
 * DO NOT MODIFY THE CONTENTS OF THIS FILE!
 * Doing so will result in a 0 for this assignment (and it could break the tests)!
 *
 * @file   XyzLanguageProcessorUnitTest.cpp
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief  XyzLanguageProcessorUnitTest implementation.
 */

#include "XyzLanguageProcessorUnitTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(XyzLanguageProcessorUnitTest);

void XyzLanguageProcessorUnitTest::setUp() {
    TestFixture::setUp();
    languageProcessor = new csc232::XyzLanguageProcessor{};
}

void XyzLanguageProcessorUnitTest::tearDown() {
    TestFixture::tearDown();
    delete languageProcessor;
}

void XyzLanguageProcessorUnitTest::testWord(const std::string &word, const std::string &message, bool expected) {
    bool actual{languageProcessor->isValid(word)};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

void XyzLanguageProcessorUnitTest::testEmptyStringIsInValid() {
    std::string word;
    bool expected{false};
    std::string message{"An empty string is not valid in this language but your processor says it is valid."};
    testWord(word, message, expected);
}

void XyzLanguageProcessorUnitTest::testXIsInValid() {
    std::string word{"X"};
    bool expected{false};
    std::string message{word + " is not valid in this language but your processor says it is valid."};
    testWord(word, message, expected);
}

void XyzLanguageProcessorUnitTest::testYIsInValid() {
    std::string word{"Y"};
    bool expected{false};
    std::string message{word + " is not valid in this language but your processor says it is valid."};
    testWord(word, message, expected);
}

void XyzLanguageProcessorUnitTest::testZIsInValid() {
    std::string word{"Z"};
    bool expected{false};
    std::string message{word + " is not valid in this language but your processor says it is valid."};
    testWord(word, message, expected);
}

void XyzLanguageProcessorUnitTest::testAIsInValid() {
    std::string word{"A"};
    bool expected{false};
    std::string message{word + " is not valid in this language but your processor says it is valid."};
    testWord(word, message, expected);
}

void XyzLanguageProcessorUnitTest::testXXIsValid() {
    std::string word{"XX"};
    bool expected{true};
    std::string message{word + " is valid in this language but your processor says it is not."};
    testWord(word, message, expected);
}

void XyzLanguageProcessorUnitTest::testXZIsValid() {
    std::string word{"XZ"};
    bool expected{true};
    std::string message{word + " is valid in this language but your processor says it is not."};
    testWord(word, message, expected);
}

void XyzLanguageProcessorUnitTest::testXYIsValid() {
    std::string word{"XY"};
    bool expected{true};
    std::string message{word + " is valid in this language but your processor says it is not."};
    testWord(word, message, expected);
}

void XyzLanguageProcessorUnitTest::testZXIsInvalid() {
    std::string word{"ZX"};
    bool expected{false};
    std::string message{word + " is not valid in this language but your processor says it is."};
    testWord(word, message, expected);
}

void XyzLanguageProcessorUnitTest::testZZIsInvalid() {
    std::string word{"ZZ"};
    bool expected{false};
    std::string message{word + " is not valid in this language but your processor says it is."};
    testWord(word, message, expected);
}

void XyzLanguageProcessorUnitTest::testZYIsInvalid() {
    std::string word{"ZY"};
    bool expected{false};
    std::string message{word + " is not valid in this language but your processor says it is."};
    testWord(word, message, expected);
}

void XyzLanguageProcessorUnitTest::testYXIsInvalid() {
    std::string word{"YX"};
    bool expected{false};
    std::string message{word + " is not valid in this language but your processor says it is."};
    testWord(word, message, expected);
}

void XyzLanguageProcessorUnitTest::testYZIsInvalid() {
    std::string word{"YZ"};
    bool expected{false};
    std::string message{word + " is not valid in this language but your processor says it is."};
    testWord(word, message, expected);
}

void XyzLanguageProcessorUnitTest::testYYIsInvalid() {
    std::string word{"YY"};
    bool expected{false};
    std::string message{word + " is not valid in this language but your processor says it is."};
    testWord(word, message, expected);
}

void XyzLanguageProcessorUnitTest::testXXXIsValid() {
    std::string word{"XXX"};
    bool expected{true};
    std::string message{word + " is valid in this language but your processor says it is not."};
    testWord(word, message, expected);
}

void XyzLanguageProcessorUnitTest::testXXZIsValid() {
    std::string word{"XXZ"};
    bool expected{true};
    std::string message{word + " is valid in this language but your processor says it is not."};
    testWord(word, message, expected);
}

void XyzLanguageProcessorUnitTest::testXXYIsValid() {
    std::string word{"XXY"};
    bool expected{true};
    std::string message{word + " is valid in this language but your processor says it is not."};
    testWord(word, message, expected);
}

void XyzLanguageProcessorUnitTest::testXYXIsInvalid() {
    std::string word{"XYX"};
    bool expected{false};
    std::string message{word + " is not valid in this language but your processor says it is."};
    testWord(word, message, expected);
}

void XyzLanguageProcessorUnitTest::testXZZYIsInvalid() {
    std::string word{"XZZY"};
    bool expected{false};
    std::string message{word + " is not valid in this language but your processor says it is."};
    testWord(word, message, expected);
}

void XyzLanguageProcessorUnitTest::testXYYYIsInValid() {
    std::string word{"XYYY"};
    bool expected{false};
    std::string message{word + " isnot  valid in this language but your processor says it is."};
    testWord(word, message, expected);
}
