/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019.
 *
 * HW01 - The Big Five
 * 
 * DO NOT MODIFY THE CONTENTS OF THIS FILE!
 * Doing so will result in a 0 for this assignment (and it could break the tests)!
 *
 * @file   RectangleUnitTest.h
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief  RectangleUnitTest specification.
 */

#ifndef CSC232_HW01_RECTANGLE_UNIT_TEST_H__
#define CSC232_HW01_RECTANGLE_UNIT_TEST_H__

#include <cppunit/extensions/HelperMacros.h>
#include "TestDriver.h"
#include "Rectangle.h"

#if DESTRUCTOR_IMPLEMENTED
class RectangleUnitTest : public CPPUNIT_NS::TestFixture
{
    CPPUNIT_TEST_SUITE(RectangleUnitTest);
#if COPY_CONSTRUCTOR_IMPLEMENTED
        CPPUNIT_TEST(testCopyConstructorMaintainsLength);
        CPPUNIT_TEST(testCopyConstructorMaintainsHeight);
#endif // COPY_CONSTRUCTOR_IMPLEMENTED

#if MOVE_CONSTRUCTOR_IMPLEMENTED
        CPPUNIT_TEST(testMoveConstructorImplemented);
#endif // MOVE_CONSTRUCTOR_IMPLEMENTED

#if COPY_ASSIGNMENT_IMPLEMENTED
        CPPUNIT_TEST(testCopyAssignmentMaintainsLength);
        CPPUNIT_TEST(testCopyAssignmentMaintainsHeight);
#endif // COPY_ASSIGNMENT_IMPLEMENTED

#if MOVE_ASSIGNMENT_IMPLEMENTED
        CPPUNIT_TEST(testMoveAssignmentImplemented);
#endif // MOVE_ASSIGNMENT_IMPLEMENTED

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

    void testCopyConstructorMaintainsLength();
    void testCopyConstructorMaintainsHeight();
    void testMoveConstructorImplemented();
    void testCopyAssignmentMaintainsLength();
    void testCopyAssignmentMaintainsHeight();
    void testMoveAssignmentImplemented();
};

#endif // DESTRUCTOR_IMPLEMENTED

#endif // CSC232_HW01_RECTANGLE_UNIT_TEST_H__
