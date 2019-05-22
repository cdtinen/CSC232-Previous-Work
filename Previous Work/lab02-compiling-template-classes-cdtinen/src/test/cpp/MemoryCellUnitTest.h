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
 * @brief  IntCellUnitTest specification.
 */

#ifndef CSC232_INT_CELL_UNIT_TEST_H__
#define CSC232_INT_CELL_UNIT_TEST_H__

#include <cppunit/extensions/HelperMacros.h>
#include <string>
#include "MemoryCell.h"

class MemoryCellUnitTest : public CPPUNIT_NS::TestFixture {

CPPUNIT_TEST_SUITE(MemoryCellUnitTest);
        CPPUNIT_TEST(testDefaultConstructor);
        CPPUNIT_TEST(testInitializingConstructor);
        CPPUNIT_TEST(testCopyConstructor);
        CPPUNIT_TEST(testMoveConstructor);
        CPPUNIT_TEST(testCopyAssignmentOperator);
        CPPUNIT_TEST(testMoveAssignmentOperator);
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
     * Verify that the default constructor creates an IntCell
     * that is storing 0.
     */
    void testDefaultConstructor();

    /**
     * Verify that the initializing constructor creates an IntCell
     * that is storing the given value.
     */
    void testInitializingConstructor();

    /**
     * Verify that state is copied to a newly created IntCell that
     * used the copy constructor for its creation.
     */
    void testCopyConstructor();

    /**
     * Verify that state is moved to a newly created IntCell that
     * used the move constructor for its creation.
     */
    void testMoveConstructor();

    /**
     * Verify that the state is copied to an existing IntCell by
     * using the copy assignment operator.
     */
    void testCopyAssignmentOperator();

    /**
     * Verify that the state is moved to an existing IntCell by
     * using the move assignment operator.
     */
    void testMoveAssignmentOperator();
};


#endif // CSC232_INT_CELL_UNIT_TEST_H__
