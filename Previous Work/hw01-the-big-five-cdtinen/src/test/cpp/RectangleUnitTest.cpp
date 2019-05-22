/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019.
 *
 * HW01 - The Big Five
 * 
 * DO NOT MODIFY THE CONTENTS OF THIS FILE!
 * Doing so will result in a 0 for this assignment (and it could break the tests)!
 *
 * @file   RectangleUnitTest.cpp
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief  RectangleUnitTest implementation.
 * @see http://cppunit.sourceforge.net/doc/cvs/group___assertions.html
 */

#include "RectangleUnitTest.h"

#if DESTRUCTOR_IMPLEMENTED

CPPUNIT_TEST_SUITE_REGISTRATION(RectangleUnitTest);

void RectangleUnitTest::setUp() {
    TestFixture::setUp();
}

void RectangleUnitTest::tearDown() {
    TestFixture::tearDown();
}

#if COPY_CONSTRUCTOR_IMPLEMENTED

void RectangleUnitTest::testCopyConstructorMaintainsLength() {
    double expectedLength{2};
    double expectedHeight{4};

    Rectangle a{expectedLength, expectedHeight};
    Rectangle b = a; // Invoke copy constructor

    a.setLength(a.getLength() + 1);

    double actualLength{b.getLength()};

    CPPUNIT_ASSERT_EQUAL_MESSAGE("Copy constructor did not maintain length", expectedLength, actualLength);
}

void RectangleUnitTest::testCopyConstructorMaintainsHeight() {
    double expectedLength{2};
    double expectedHeight{4};

    Rectangle a{expectedLength, expectedHeight};
    Rectangle b = a; // Invoke copy constructor

    a.setHeight(a.getHeight() + 1);

    double actualHeight{b.getHeight()};

    CPPUNIT_ASSERT_EQUAL_MESSAGE("Copy constructor did not maintain height", expectedHeight, actualHeight);
}

#endif // COPY_CONSTRUCTOR_IMPLEMENTED

void RectangleUnitTest::testMoveConstructorImplemented() {
#if MOVE_CONSTRUCTOR_IMPLEMENTED
    CPPUNIT_ASSERT_MESSAGE("Move constructor implemented", true);
#else
    CPPUNIT_FAIL("Move constructor not implemented");
#endif // MOVE_CONSTRUCTOR_IMPLEMENTED
}


#if COPY_ASSIGNMENT_IMPLEMENTED

void RectangleUnitTest::testCopyAssignmentMaintainsLength() {
    double expectedLength{2};
    double expectedHeight{4};

    Rectangle a{expectedLength, expectedHeight};
    Rectangle b;

    b = a; // Invoke copy assignment
    a.setLength(a.getLength() + 1);

    double actualLength{b.getLength()};
    CPPUNIT_ASSERT_EQUAL_MESSAGE("Copy assignment did not maintain length", expectedLength, actualLength);
}

void RectangleUnitTest::testCopyAssignmentMaintainsHeight() {
    double expectedLength{2};
    double expectedHeight{4};

    Rectangle a{expectedLength, expectedHeight};
    Rectangle b;

    b = a; // Invoke copy assignment
    a.setHeight(a.getHeight() + 1);

    double actualHeight{b.getHeight()};
    CPPUNIT_ASSERT_EQUAL_MESSAGE("Copy assignment did not maintain height", expectedHeight, actualHeight);
}

#endif // COPY_ASSIGNMENT_IMPLEMENTED

void RectangleUnitTest::testMoveAssignmentImplemented() {
#if MOVE_ASSIGNMENT_IMPLEMENTED
    CPPUNIT_ASSERT_MESSAGE("Move assignment implemented", true);
#else
    CPPUNIT_FAIL("Move assignment not implemented");
#endif // MOVE_CONSTRUCTOR_IMPLEMENTED
}

#endif // DESTRUCTOR_IMPLEMENTED
