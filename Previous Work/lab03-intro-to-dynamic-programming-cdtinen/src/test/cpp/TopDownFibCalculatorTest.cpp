/**
 * CSC232 Data Structures with C++
 * Missouri State University, Spring 2019.
 *
 * @file    TopDownFibCalculatorTest.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 * @brief   TopDownFibCalculator CPPUNIT test implementation. DO NOT MODIFY THE CONTENTS OF THIS FILE!
 * @see     http://sourceforge.net/projects/cppunit/files
 */

#include "TopDownFibCalculatorTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(TopDownFibCalculatorTest);

extern void testItWith(FibCalculator* calculator, int n, int expected);

TopDownFibCalculatorTest::TopDownFibCalculatorTest() {
    /** no-op */
}

TopDownFibCalculatorTest::~TopDownFibCalculatorTest() {
    /** no-op */
}

void TopDownFibCalculatorTest::setUp() {
    /** no-op */
}

void TopDownFibCalculatorTest::tearDown() {
    /** no-op */
}

void TopDownFibCalculatorTest::testBaseCase() {
    testItWith(new TopDownFibCalculator{}, 0, 1);
}

void TopDownFibCalculatorTest::testBorderCase() {
    testItWith(new TopDownFibCalculator{}, 1, 1);
}

void TopDownFibCalculatorTest::testBiggerValue() {
    testItWith(new TopDownFibCalculator{}, 12, 233);
}
