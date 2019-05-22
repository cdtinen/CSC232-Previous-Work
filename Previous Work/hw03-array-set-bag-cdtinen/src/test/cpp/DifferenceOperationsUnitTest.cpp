/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019.
 *
 * HW03 - Array Set Bags
 *
 * DO NOT MODIFY THE CONTENTS OF THIS FILE!
 * Doing so will result in a 0 for this assignment (and it could break the tests)!
 *
 * @file   DifferenceOperationsUnitTest.cpp
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief  DifferenceOperationsUnitTest implementation.
 */

#include "DifferenceOperationsUnitTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(DifferenceOperationsUnitTest);

void DifferenceOperationsUnitTest::setUp() {
    TestFixture::setUp();
}

void DifferenceOperationsUnitTest::tearDown() {
    TestFixture::tearDown();
}

void DifferenceOperationsUnitTest::testTwoEmptyBags() {
    SetArrayBag<std::string> lhb = SetArrayBag<std::string>{};
    SetArrayBag<std::string> rhb = SetArrayBag<std::string>{};
    BagInterface<std::string>& bagUnion = lhb.differenceWith(rhb);
    int expectedSize{0};
    int actualSize{bagUnion.getCurrentSize()};
    CPPUNIT_ASSERT_EQUAL(expectedSize, actualSize);
}

void DifferenceOperationsUnitTest::testLeftEmptyBag() {
    SetArrayBag<std::string> lhb = SetArrayBag<std::string>{};
    SetArrayBag<std::string> rhb = SetArrayBag<std::string>{};
    rhb.add("Test");
    BagInterface<std::string>& bagUnion = lhb.differenceWith(rhb);
    int expectedSize{0};
    int actualSize{bagUnion.getCurrentSize()};
    CPPUNIT_ASSERT_EQUAL(expectedSize, actualSize);
}

void DifferenceOperationsUnitTest::testRightEmptyBag() {
    SetArrayBag<std::string> lhb = SetArrayBag<std::string>{};
    SetArrayBag<std::string> rhb = SetArrayBag<std::string>{};
    lhb.add("Test");
    BagInterface<std::string>& bagUnion = lhb.differenceWith(rhb);
    int expectedSize{1};
    int actualSize{bagUnion.getCurrentSize()};
    CPPUNIT_ASSERT_EQUAL(expectedSize, actualSize);
}

void DifferenceOperationsUnitTest::testBiggerLeftBag() {
    SetArrayBag<std::string> lhb = SetArrayBag<std::string>{};
    SetArrayBag<std::string> rhb = SetArrayBag<std::string>{};
    lhb.add("Test");
    lhb.add("Case");
    rhb.add("Test");
    BagInterface<std::string>& bagUnion = lhb.differenceWith(rhb);
    int expectedSize{1};
    int actualSize{bagUnion.getCurrentSize()};
    CPPUNIT_ASSERT_EQUAL(expectedSize, actualSize);
}

void DifferenceOperationsUnitTest::testBiggerRightBag() {
    SetArrayBag<std::string> lhb = SetArrayBag<std::string>{};
    SetArrayBag<std::string> rhb = SetArrayBag<std::string>{};
    lhb.add("Test");
    rhb.add("Test");
    rhb.add("Case");
    BagInterface<std::string>& bagUnion = lhb.differenceWith(rhb);
    int expectedSize{0};
    int actualSize{bagUnion.getCurrentSize()};
    CPPUNIT_ASSERT_EQUAL(expectedSize, actualSize);
}

void DifferenceOperationsUnitTest::testSizeBookExample() {
    SetArrayBag<char> bag1{};
    bag1.add('a');
    bag1.add('b');
    bag1.add('c');

    SetArrayBag<char> bag2{};
    bag2.add('b');
    bag2.add('b');
    bag2.add('d');
    bag2.add('e');

    BagInterface<char>& result = bag1.differenceWith(bag2);

    int expectedSize{2};
    int actualSize{(bag1.differenceWith(bag2)).getCurrentSize()};
    CPPUNIT_ASSERT_EQUAL(expectedSize, actualSize);
}

void DifferenceOperationsUnitTest::testFreqOfABookExample() {
    SetArrayBag<char> bag1{};
    bag1.add('a');
    bag1.add('b');
    bag1.add('c');

    SetArrayBag<char> bag2{};
    bag2.add('b');
    bag2.add('b');
    bag2.add('d');
    bag2.add('e');

    BagInterface<char>& result = bag1.differenceWith(bag2);

    int expectedFrequency{1};
    int actualFrequency{result.getFrequencyOf('a')};
    CPPUNIT_ASSERT_EQUAL(expectedFrequency, actualFrequency);
}

void DifferenceOperationsUnitTest::testFreqOfBBookExample() {
    SetArrayBag<char> bag1{};
    bag1.add('a');
    bag1.add('b');
    bag1.add('c');

    SetArrayBag<char> bag2{};
    bag2.add('b');
    bag2.add('b');
    bag2.add('d');
    bag2.add('e');

    BagInterface<char>& result = bag1.differenceWith(bag2);

    int expectedFrequency{0};
    int actualFrequency{result.getFrequencyOf('b')};
    CPPUNIT_ASSERT_EQUAL(expectedFrequency, actualFrequency);
}

void DifferenceOperationsUnitTest::testFreqOfCBookExample() {
    SetArrayBag<char> bag1{};
    bag1.add('a');
    bag1.add('b');
    bag1.add('c');

    SetArrayBag<char> bag2{};
    bag2.add('b');
    bag2.add('b');
    bag2.add('d');
    bag2.add('e');

    BagInterface<char>& result = bag1.differenceWith(bag2);

    int expectedFrequency{1};
    int actualFrequency{result.getFrequencyOf('c')};
    CPPUNIT_ASSERT_EQUAL(expectedFrequency, actualFrequency);
}

void DifferenceOperationsUnitTest::testFreqOfDBookExample() {
    SetArrayBag<char> bag1{};
    bag1.add('a');
    bag1.add('b');
    bag1.add('c');

    SetArrayBag<char> bag2{};
    bag2.add('b');
    bag2.add('b');
    bag2.add('d');
    bag2.add('e');

    BagInterface<char>& result = bag1.differenceWith(bag2);

    int expectedFrequency{0};
    int actualFrequency{result.getFrequencyOf('d')};
    CPPUNIT_ASSERT_EQUAL(expectedFrequency, actualFrequency);
}

void DifferenceOperationsUnitTest::testFreqOfEBookExample() {
    SetArrayBag<char> bag1{};
    bag1.add('a');
    bag1.add('b');
    bag1.add('c');

    SetArrayBag<char> bag2{};
    bag2.add('b');
    bag2.add('b');
    bag2.add('d');
    bag2.add('e');

    BagInterface<char>& result = bag1.differenceWith(bag2);

    int expectedFrequency{0};
    int actualFrequency{result.getFrequencyOf('e')};
    CPPUNIT_ASSERT_EQUAL(expectedFrequency, actualFrequency);
}
