/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019.
 *
 * HW03 - Array Set Bags
 *
 * DO NOT MODIFY THE CONTENTS OF THIS FILE!
 * Doing so will result in a 0 for this assignment (and it could break the tests)!
 *
 * @file   UnionOperationsUnitTest.h
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief  UnionOperationsUnitTest specification.
 */

#ifndef HW03_UNION_OPERATIONS_UNIT_TEST_H__
#define HW03_UNION_OPERATIONS_UNIT_TEST_H__

#include <cppunit/extensions/HelperMacros.h>
#include "BagInterface.h"
#include "SetArrayBag.h"

class UnionOperationsUnitTest : public CPPUNIT_NS::TestFixture {
CPPUNIT_TEST_SUITE(UnionOperationsUnitTest);
        CPPUNIT_TEST(testTwoEmptyBags);
        CPPUNIT_TEST(testLeftEmptyBag);
        CPPUNIT_TEST(testRightEmptyBag);
        CPPUNIT_TEST(testBiggerLeftBag);
        CPPUNIT_TEST(testBiggerRightBag);
        CPPUNIT_TEST(testSizeBookExample);
        CPPUNIT_TEST(testFreqOfABookExample);
        CPPUNIT_TEST(testFreqOfBBookExample);
        CPPUNIT_TEST(testFreqOfCBookExample);
        CPPUNIT_TEST(testFreqOfDBookExample);
        CPPUNIT_TEST(testFreqOfEBookExample);
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

    void testTwoEmptyBags();
    void testLeftEmptyBag();
    void testRightEmptyBag();
    void testBiggerLeftBag();
    void testBiggerRightBag();
    void testSizeBookExample();
    void testFreqOfABookExample();
    void testFreqOfBBookExample();
    void testFreqOfCBookExample();
    void testFreqOfDBookExample();
    void testFreqOfEBookExample();
};


#endif // HW03_UNION_OPERATIONS_UNIT_TEST_H__