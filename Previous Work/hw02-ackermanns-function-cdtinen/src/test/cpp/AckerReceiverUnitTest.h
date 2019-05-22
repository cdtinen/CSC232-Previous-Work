/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019.
 *
 * HW02 - Ackermann's function
 *
 * DO NOT MODIFY THE CONTENTS OF THIS FILE!
 * Doing so will result in a 0 for this assignment (and it could break the tests)!
 *
 * @file   AckerReceiverUnitTest.h
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief  AckerReceiverUnitTest specification.
 */

#ifndef HW02_ACKER_RECEIVER_UNIT_TEST_H__
#define HW02_ACKER_RECEIVER_UNIT_TEST_H__

#include <cppunit/extensions/HelperMacros.h>
#include "AckerReceiver.h"

class AckerReceiverUnitTest : public CPPUNIT_NS::TestFixture {
CPPUNIT_TEST_SUITE(AckerReceiverUnitTest);
        CPPUNIT_TEST(testDefaults);
        CPPUNIT_TEST(testPositiveMZeroN);
        CPPUNIT_TEST(testZeroMPositiveN);
        CPPUNIT_TEST(testPositiveMPositiveN);
        CPPUNIT_TEST(testSameMandN);
    CPPUNIT_TEST_SUITE_END();

public:
    /**
     * Method executed before each test.
     */
    void setUp() override;

    /**
     * Method executed after each test.
     */
    void tearDown() override;

    /**
     * Verify results for default values (m = 0, n = 0); expected value is 1.
     */
    void testDefaults();

    /**
     * Verify results for positive m, zero n (m = 1, n = 0); expected value is 2.
     */
    void testPositiveMZeroN();

    /**
     * Verify results for zero m, positive n (m = 0, n = 1); expected value is 2.
     */
    void testZeroMPositiveN();

    /**
     * Verify results for positive m, positive n (m = 3, 4); expected value is 125.
     */
    void testPositiveMPositiveN();

    /**
     * Verify results for same m and n (m = 3, n = 3); expected value is 61.
     */
    void testSameMandN();
};


#endif // HW02_ACKER_RECEIVER_UNIT_TEST_H__
