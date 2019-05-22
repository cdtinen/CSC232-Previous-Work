/**
 * CSC232 Data Structures
 * Missouri State University
 *
 * DO NOT MODIFY THE CONTENTS OF THIS FILE!
 * Doing so will result in a 0 for this assignment (and it could break the tests)!
 *
 * @file   XyzLanguageProcessorUnitTest.h
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief  XyzLanguageProcessorUnitTest specification.
 */

#ifndef CSC232_HW04_LANGUAGE_RECOGNITION_XYZ_LANGUAGE_PROCESSOR_UNIT_TEST_H
#define CSC232_HW04_LANGUAGE_RECOGNITION_XYZ_LANGUAGE_PROCESSOR_UNIT_TEST_H

#include <cppunit/extensions/HelperMacros.h>
#include "LanguageProcessor.h"
#include "XyzLanguageProcessor.h"

class XyzLanguageProcessorUnitTest : public CPPUNIT_NS::TestFixture {
private:
CPPUNIT_TEST_SUITE(XyzLanguageProcessorUnitTest);
        CPPUNIT_TEST(testEmptyStringIsInValid);
        CPPUNIT_TEST(testXIsInValid);
        CPPUNIT_TEST(testYIsInValid);
        CPPUNIT_TEST(testZIsInValid);
        CPPUNIT_TEST(testAIsInValid);
        CPPUNIT_TEST(testXXIsValid);
        CPPUNIT_TEST(testXZIsValid);
        CPPUNIT_TEST(testXYIsValid);
        CPPUNIT_TEST(testZZIsInvalid);
        CPPUNIT_TEST(testZXIsInvalid);
        CPPUNIT_TEST(testZYIsInvalid);
        CPPUNIT_TEST(testYXIsInvalid);
        CPPUNIT_TEST(testYZIsInvalid);
        CPPUNIT_TEST(testYYIsInvalid);
        CPPUNIT_TEST(testXXXIsValid);
        CPPUNIT_TEST(testXXZIsValid);
        CPPUNIT_TEST(testXXYIsValid);
        CPPUNIT_TEST(testXYXIsInvalid);
        CPPUNIT_TEST(testXZZYIsInvalid);
        CPPUNIT_TEST(testXYYYIsInValid);
    CPPUNIT_TEST_SUITE_END();

    csc232::LanguageProcessor *languageProcessor;

    /**
     * Helper method to keep unit tests DRY.
     * @param word the word to test for validity in the XYZ language
     * @param message a message offering a clue of what happened during a failed test
     * @param expected the expected outcome of the current unit test
     */
    void testWord(const std::string &word, const std::string &message, bool expected);

public:
    /**
     * A method that executes before each unit test executes.
     */
    void setUp() override;

    /**
     * A method that executes after each unit test has executed.
     */
    void tearDown() override;

    /**
     * Demonstrate that the language processor successfully flags the empty string as not a valid word in L.
     */
    void testEmptyStringIsInValid();

    /**
     * Demonstrate that the language processor successfully flags the string "X" as not a valid word in L.
     */
    void testXIsInValid();

    /**
     * Demonstrate that the language processor successfully flags the string "Y" as not a valid word in L.
     */
    void testYIsInValid();

    /**
     * Demonstrate that the language processor successfully flags the string "Z" as not a valid word in L.
     */
    void testZIsInValid();

    /**
     * Demonstrate that the language processor successfully flags the string "A" as not a valid word in L.
     */
    void testAIsInValid();

    /**
     * Demonstrate that the language processor successfully flags the string "XX" as a valid word in L.
     */
    void testXXIsValid();

    /**
     * Demonstrate that the language processor successfully flags the string "XZ" as a valid word in L.
     */
    void testXZIsValid();

    /**
     * Demonstrate that the language processor successfully flags the string "XY" as a valid word in L.
     */
    void testXYIsValid();

    /**
     * Demonstrate that the language processor successfully flags the string "ZX" as not a valid word in L.
     */
    void testZXIsInvalid();

    /**
     * Demonstrate that the language processor successfully flags the string "ZZ" as not a valid word in L.
     */
    void testZZIsInvalid();

    /**
     * Demonstrate that the language processor successfully flags the string "ZY" as not a valid word in L.
     */
    void testZYIsInvalid();

    /**
     * Demonstrate that the language processor successfully flags the string "YX" as not a valid word in L.
     */
    void testYXIsInvalid();

    /**
     * Demonstrate that the language processor successfully flags the string "YZ" as not a valid word in L.
     */
    void testYZIsInvalid();

    /**
     * Demonstrate that the language processor successfully flags the string "YY" as not a valid word in L.
     */
    void testYYIsInvalid();

    /**
     * Demonstrate that the language processor successfully flags the string "XXX" as a valid word in L.
     */
    void testXXXIsValid();

    /**
     * Demonstrate that the language processor successfully flags the string "XXZ" as a valid word in L.
     */
    void testXXZIsValid();

    /**
     * Demonstrate that the language processor successfully flags the string "XXY" as a valid word in L.
     */
    void testXXYIsValid();

    /**
     * Demonstrate that the language processor successfully flags the string "XYX" as not a valid word in L.
     */
    void testXYXIsInvalid();

    /**
     * Demonstrate that the language processor successfully flags the string "XZZY" as not a valid word in L.
     */
    void testXZZYIsInvalid();

    /**
     * Demonstrate that the language processor successfully flags the string "XYYY" as not a valid word in L.
     */
    void testXYYYIsInValid();

};


#endif //CSC232_HW04_LANGUAGE_RECOGNITION_XYZ_LANGUAGE_PROCESSOR_UNIT_TEST_H
