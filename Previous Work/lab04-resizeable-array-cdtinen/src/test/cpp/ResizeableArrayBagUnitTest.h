/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Fall 2017
 *
 * @file    Main.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 */

#ifndef LAB07_RESIZEABLEARRAYBAGUNITTEST_H
#define LAB07_RESIZEABLEARRAYBAGUNITTEST_H

#include <string>
#include <cppunit/extensions/HelperMacros.h>

class ResizeableArrayBagUnitTest : public CPPUNIT_NS::TestFixture {
CPPUNIT_TEST_SUITE(ResizeableArrayBagUnitTest);

    CPPUNIT_TEST_SUITE_END();
public:
    ResizeableArrayBagUnitTest() = default;
    void setUp() override;
    void tearDown() override;

};


#endif //LAB07_RESIZEABLEARRAYBAGUNITTEST_H
