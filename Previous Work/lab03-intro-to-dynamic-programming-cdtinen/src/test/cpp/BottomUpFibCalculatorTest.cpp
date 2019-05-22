/**
 * CSC232 Data Structures with C++
 * Missouri State University, Spring 2019.
 *
 * @file    BottomUpFibCalculatorTest.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 * @brief   BottomUpFibCalculator CPPUNIT test implementation. DO NOT MODIFY THE CONTENTS OF THIS FILE!
 * @see     http://sourceforge.net/projects/cppunit/files
 */

#include "BottomUpFibCalculatorTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(BottomUpFibCalculatorTest);

extern void testItWith(FibCalculator* calculator, int n, int expected);

BottomUpFibCalculatorTest::BottomUpFibCalculatorTest() {
    /** no-op */
}

BottomUpFibCalculatorTest::~BottomUpFibCalculatorTest() {
    /** no-op */
}

void BottomUpFibCalculatorTest::setUp() {
    /** no-op */
}

void BottomUpFibCalculatorTest::tearDown() {
    /** no-op */
}

void BottomUpFibCalculatorTest::testBaseCase() {
    testItWith(new BottomUpFibCalculator{}, 0, 1);
}

void BottomUpFibCalculatorTest::testBorderCase() {
    testItWith(new BottomUpFibCalculator{}, 1, 1);
}

void BottomUpFibCalculatorTest::testBiggerValue() {
    testItWith(new BottomUpFibCalculator{}, 12, 233);
}