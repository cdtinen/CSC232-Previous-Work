/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019.
 *
 * Lab02 - Strategies for Compiling Template Classes
 *
 * DO NOT MODIFY THE CONTENTS OF THIS FILE!
 * Doing so will result in a 0 for this assignment (and it could break the tests)!
 *
 * @file   MemoryCellUnitTest.h
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief  MemoryCellUnitTest specification.
 */

#include "MemoryCellUnitTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(MemoryCellUnitTest);

void MemoryCellUnitTest::setUp() {
    TestFixture::setUp();
}

void MemoryCellUnitTest::tearDown() {
    TestFixture::tearDown();
}

void MemoryCellUnitTest::testDefaultConstructor() {
    std::string message{"Actual did not match expected when testing default constructor"};
    int expected{0};
    MemoryCell<int> a{};

    int actual = a.read();
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

void MemoryCellUnitTest::testInitializingConstructor() {
    std::string message{"Actual did not match expected when testing initializing constructor"};
    int expected{10};
    MemoryCell<int> a{expected};

    int actual = a.read();
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

void MemoryCellUnitTest::testCopyConstructor() {
    std::string message{"Actual did not match expected when testing copy constructor"};
    int expected{10};
    MemoryCell<int> a{expected};
    MemoryCell<int> b{a};

    int actual = b.read();
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

void MemoryCellUnitTest::testMoveConstructor() {
    std::string message{"Actual did not match expected when testing move constructor"};
    int expected{10};
    MemoryCell<int> a{MemoryCell<int>{expected}};

    int actual = a.read();
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

void MemoryCellUnitTest::testCopyAssignmentOperator() {
    std::string message{"Actual did not match expected when testing copy assignment operator"};
    int expected{10};
    MemoryCell<int> a{expected};
    MemoryCell<int> b;

    b = a;

    int actual = b.read();
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}

void MemoryCellUnitTest::testMoveAssignmentOperator() {
    std::string message{"Actual did not match expected when testing move assignment operator"};
    int expected{10};
    MemoryCell<int> a;

    a = MemoryCell<int>{expected};

    int actual = a.read();
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expected, actual);
}
