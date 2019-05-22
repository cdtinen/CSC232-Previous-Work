/**
 * CSC232 Data Structures with C++
 * Missouri State University, Spring 2019
 *
 * @file TestUtils.h
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Global helper utility functions used by CPPUNIT tests that helps keep the code DRY.
 */

#ifndef LAB09_TEST_UTILS_H__
#define LAB09_TEST_UTILS_H__

#include <sstream>
#include <cppunit/TestAssert.h>
#include "FibCalculator.h"

void testItWith(FibCalculator* calculator, int n, int expected) {
    int actual = calculator->nthFibonacciNumber(n);
    std::stringstream ss;
    ss << "Problem : I expected " << expected << " but the calculator returned " << actual << "...";
    CPPUNIT_ASSERT_EQUAL_MESSAGE(ss.str(), expected, actual);
}

#endif /* LAB09_TEST_UTILS_H__ */
