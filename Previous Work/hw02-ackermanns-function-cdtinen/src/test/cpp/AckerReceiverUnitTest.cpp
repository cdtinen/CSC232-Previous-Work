/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019.
 *
 * HW02 - Ackermann's function
 *
 * DO NOT MODIFY THE CONTENTS OF THIS FILE!
 * Doing so will result in a 0 for this assignment (and it could break the tests)!
 *
 * @file   AckerReceiverUnitTest.cpp
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief  RectangleUnitTest implementation.
 * @see http://cppunit.sourceforge.net/doc/cvs/group___assertions.html
 */

#include "AckerReceiverUnitTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(AckerReceiverUnitTest);

void AckerReceiverUnitTest::setUp() {
    TestFixture::setUp();
}

void AckerReceiverUnitTest::tearDown() {
    TestFixture::tearDown();
}

void AckerReceiverUnitTest::testDefaults() {
    AckerReceiver receiver{};
    int expected{1};
    int actual = receiver.acker();
    CPPUNIT_ASSERT_EQUAL_MESSAGE("acker(0, 0) didn't yield expected results", expected, actual);
}

void AckerReceiverUnitTest::testPositiveMZeroN() {
    AckerReceiver receiver{};
    int expected{2};
    int actual = receiver.acker(1, 0);
    CPPUNIT_ASSERT_EQUAL_MESSAGE("acker(1, 0) didn't yield expected results", expected, actual);
}

void AckerReceiverUnitTest::testZeroMPositiveN() {
    AckerReceiver receiver{};
    int expected{2};
    int actual = receiver.acker(0, 1);
    CPPUNIT_ASSERT_EQUAL_MESSAGE("acker(0, 1) didn't yield expected results", expected, actual);
}

void AckerReceiverUnitTest::testPositiveMPositiveN() {
    AckerReceiver receiver{};
    int expected{125};
    int actual = receiver.acker(3, 4);
    CPPUNIT_ASSERT_EQUAL_MESSAGE("acker(3, 4) didn't yield expected results", expected, actual);
}

void AckerReceiverUnitTest::testSameMandN() {
    AckerReceiver receiver{};
    int expected{61};
    int actual = receiver.acker(3, 3);
    CPPUNIT_ASSERT_EQUAL_MESSAGE("acker(3, 3) didn't yield expected results", expected, actual);
}
