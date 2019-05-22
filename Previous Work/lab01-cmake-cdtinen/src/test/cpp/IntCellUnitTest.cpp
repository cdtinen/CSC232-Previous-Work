/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019.
 *
 * Lab01 - Software Development Tools: cmake and make
 *
 * DO NOT MODIFY THE CONTENTS OF THIS FILE!
 * Doing so will result in a 0 for this assignment (and it could break the tests)!
 *
 * @file   IntCellUnitTest.h
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief  IntCellUnitTest specification.
 */

#include "IntCellUnitTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(IntCellUnitTest);

void IntCellUnitTest::setUp() {
    TestFixture::setUp();
}

void IntCellUnitTest::tearDown() {
    TestFixture::tearDown();
}

void IntCellUnitTest::testDefaultConstructor() {
    std::string message{"Actual did not match expected when testing default constructor"};
    int expected{0};
    IntCell a{};

    int actual = a.read();
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

void IntCellUnitTest::testInitializingConstructor() {
    std::string message{"Actual did not match expected when testing initializing constructor"};
    int expected{10};
    IntCell a{expected};

    int actual = a.read();
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

void IntCellUnitTest::testCopyConstructor() {
    std::string message{"Actual did not match expected when testing copy constructor"};
    int expected{10};
    IntCell a{expected};
    IntCell b{a};

    int actual = b.read();
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

void IntCellUnitTest::testMoveConstructor() {
    std::string message{"Actual did not match expected when testing move constructor"};
    int expected{10};
    IntCell a{IntCell{expected}};

    int actual = a.read();
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

void IntCellUnitTest::testCopyAssignmentOperator() {
    std::string message{"Actual did not match expected when testing copy assignment operator"};
    int expected{10};
    IntCell a{expected};
    IntCell b;

    b = a;

    int actual = b.read();
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

void IntCellUnitTest::testMoveAssignmentOperator() {
    std::string message{"Actual did not match expected when testing move assignment operator"};
    int expected{10};
    IntCell a;

    a = IntCell{expected};

    int actual = a.read();
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}
