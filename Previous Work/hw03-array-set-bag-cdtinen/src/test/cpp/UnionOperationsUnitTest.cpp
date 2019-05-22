/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019.
 *
 * HW03 - Array Set Bags
 *
 * DO NOT MODIFY THE CONTENTS OF THIS FILE!
 * Doing so will result in a 0 for this assignment (and it could break the tests)!
 *
 * @file   UnionOperationsUnitTest.cpp
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief  UnionOperationsUnitTest implementation.
 */

#include "UnionOperationsUnitTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(UnionOperationsUnitTest);

void UnionOperationsUnitTest::setUp() {
    TestFixture::setUp();
}

void UnionOperationsUnitTest::tearDown() {
    TestFixture::tearDown();
}

void UnionOperationsUnitTest::testTwoEmptyBags() {
    SetArrayBag<std::string> lhb = SetArrayBag<std::string>{};
    SetArrayBag<std::string> rhb = SetArrayBag<std::string>{};
    BagInterface<std::string>& bagUnion = lhb.unionWith(rhb);
    int expectedSize{0};
    int actualSize{bagUnion.getCurrentSize()};
    std::string message{"The union of two empty bags should be empty"};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expectedSize, actualSize);
}

void UnionOperationsUnitTest::testLeftEmptyBag() {
    SetArrayBag<std::string> lhb = SetArrayBag<std::string>{};
    SetArrayBag<std::string> rhb = SetArrayBag<std::string>{};
    rhb.add("Test");
    BagInterface<std::string>& bagUnion = lhb.unionWith(rhb);
    int expectedSize{1};
    int actualSize{bagUnion.getCurrentSize()};
    std::string message{"The union with one empty bag should be the size of the non-empty bag"};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expectedSize, actualSize);
}

void UnionOperationsUnitTest::testRightEmptyBag() {
    SetArrayBag<std::string> lhb = SetArrayBag<std::string>{};
    SetArrayBag<std::string> rhb = SetArrayBag<std::string>{};
    lhb.add("Test");
    BagInterface<std::string>& bagUnion = lhb.unionWith(rhb);
    int expectedSize{1};
    int actualSize{bagUnion.getCurrentSize()};
    std::string message{"The union with one empty bag should be the size of the non-empty bag"};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expectedSize, actualSize);
}

void UnionOperationsUnitTest::testBiggerLeftBag() {
    SetArrayBag<std::string> lhb = SetArrayBag<std::string>{};
    SetArrayBag<std::string> rhb = SetArrayBag<std::string>{};
    lhb.add("Test");
    lhb.add("Case");
    rhb.add("Test");
    BagInterface<std::string>& bagUnion = lhb.unionWith(rhb);
    int expectedSize{lhb.getCurrentSize() + rhb.getCurrentSize()};
    int actualSize{bagUnion.getCurrentSize()};
    std::string message{"The union of two non-empty bag should be the size of both combined"};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expectedSize, actualSize);
}

void UnionOperationsUnitTest::testBiggerRightBag() {
    SetArrayBag<std::string> lhb = SetArrayBag<std::string>{};
    SetArrayBag<std::string> rhb = SetArrayBag<std::string>{};
    lhb.add("Test");
    rhb.add("Test");
    rhb.add("Case");
    BagInterface<std::string>& bagUnion = lhb.unionWith(rhb);
    int expectedSize{lhb.getCurrentSize() + rhb.getCurrentSize()};
    int actualSize{bagUnion.getCurrentSize()};
    std::string message{"The union of two non-empty bag should be the size of both combined"};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expectedSize, actualSize);
}

void UnionOperationsUnitTest::testSizeBookExample() {
    SetArrayBag<char> bag1{};
    bag1.add('a');
    bag1.add('b');
    bag1.add('c');

    SetArrayBag<char> bag2{};
    bag2.add('b');
    bag2.add('b');
    bag2.add('d');
    bag2.add('e');

    BagInterface<char>& result = bag1.unionWith(bag2);

    int expectedSize{bag1.getCurrentSize() + bag2.getCurrentSize()};
    int actualSize{(bag1.unionWith(bag2)).getCurrentSize()};
    std::string message{"Book size test should be 7"};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expectedSize, actualSize);
}

void UnionOperationsUnitTest::testFreqOfABookExample() {
    SetArrayBag<char> bag1{};
    bag1.add('a');
    bag1.add('b');
    bag1.add('c');

    SetArrayBag<char> bag2{};
    bag2.add('b');
    bag2.add('b');
    bag2.add('d');
    bag2.add('e');

    BagInterface<char>& result = bag1.unionWith(bag2);

    int expectedFrequency{bag1.getFrequencyOf('a') + bag2.getFrequencyOf('a')};
    int actualFrequency{result.getFrequencyOf('a')};
    std::string message{"Frequency of a should be 1"};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expectedFrequency, actualFrequency);
}

void UnionOperationsUnitTest::testFreqOfBBookExample() {
    SetArrayBag<char> bag1{};
    bag1.add('a');
    bag1.add('b');
    bag1.add('c');

    SetArrayBag<char> bag2{};
    bag2.add('b');
    bag2.add('b');
    bag2.add('d');
    bag2.add('e');

    BagInterface<char>& result = bag1.unionWith(bag2);

    int expectedFrequency{bag1.getFrequencyOf('b') + bag2.getFrequencyOf('b')};
    int actualFrequency{result.getFrequencyOf('b')};
    std::string message{"Frequency of b should be 4"};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expectedFrequency, actualFrequency);
}

void UnionOperationsUnitTest::testFreqOfCBookExample() {
    SetArrayBag<char> bag1{};
    bag1.add('a');
    bag1.add('b');
    bag1.add('c');

    SetArrayBag<char> bag2{};
    bag2.add('b');
    bag2.add('b');
    bag2.add('d');
    bag2.add('e');

    BagInterface<char>& result = bag1.unionWith(bag2);

    int expectedFrequency{bag1.getFrequencyOf('c') + bag2.getFrequencyOf('c')};
    int actualFrequency{result.getFrequencyOf('c')};
    std::string message{"Frequency of c should be 1"};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expectedFrequency, actualFrequency);
}

void UnionOperationsUnitTest::testFreqOfDBookExample() {
    SetArrayBag<char> bag1{};
    bag1.add('a');
    bag1.add('b');
    bag1.add('c');

    SetArrayBag<char> bag2{};
    bag2.add('b');
    bag2.add('b');
    bag2.add('d');
    bag2.add('e');

    BagInterface<char>& result = bag1.unionWith(bag2);

    int expectedFrequency{bag1.getFrequencyOf('d') + bag2.getFrequencyOf('d')};
    int actualFrequency{result.getFrequencyOf('d')};
    std::string message{"Frequency of d should be 1"};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expectedFrequency, actualFrequency);
}

void UnionOperationsUnitTest::testFreqOfEBookExample() {
    SetArrayBag<char> bag1{};
    bag1.add('a');
    bag1.add('b');
    bag1.add('c');

    SetArrayBag<char> bag2{};
    bag2.add('b');
    bag2.add('b');
    bag2.add('d');
    bag2.add('e');

    BagInterface<char>& result = bag1.unionWith(bag2);

    int expectedFrequency{bag1.getFrequencyOf('e') + bag2.getFrequencyOf('e')};
    int actualFrequency{result.getFrequencyOf('e')};
    std::string message{"Frequency of e should be 1"};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expectedFrequency, actualFrequency);
}
