/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019.
 *
 * HW03 - Array Set Bags
 *
 * DO NOT MODIFY THE CONTENTS OF THIS FILE!
 * Doing so will result in a 0 for this assignment (and it could break the tests)!
 *
 * @file   IntersectionOperationsUnitTest.cpp
 * @author Jim Daehn <jdaehn@missouristate.edu>
 * @brief  IntersectionOperationsUnitTest implementation.
 */

#include "IntersectionOperationsUnitTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(IntersectionOperationsUnitTest);

void IntersectionOperationsUnitTest::setUp() {
    TestFixture::setUp();
}

void IntersectionOperationsUnitTest::tearDown() {
    TestFixture::tearDown();
}

void IntersectionOperationsUnitTest::testTwoEmptyBags() {
    SetArrayBag<std::string> lhb = SetArrayBag<std::string>{};
    SetArrayBag<std::string> rhb = SetArrayBag<std::string>{};
    BagInterface<std::string>& bagIntersection = lhb.intersectionWith(rhb);
    int expectedSize{0};
    int actualSize{bagIntersection.getCurrentSize()};
    std::string message{"The intersection of two empty bags should be empty"};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expectedSize, actualSize);
}

void IntersectionOperationsUnitTest::testLeftEmptyBag() {
    SetArrayBag<std::string> lhb = SetArrayBag<std::string>{};
    SetArrayBag<std::string> rhb = SetArrayBag<std::string>{};
    rhb.add("Test");
    BagInterface<std::string>& bagIntersection = lhb.intersectionWith(rhb);
    int expectedSize{0};
    int actualSize{bagIntersection.getCurrentSize()};
    std::string message{"The intersection with one empty bag should be empty"};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expectedSize, actualSize);
}

void IntersectionOperationsUnitTest::testRightEmptyBag() {
    SetArrayBag<std::string> lhb = SetArrayBag<std::string>{};
    SetArrayBag<std::string> rhb = SetArrayBag<std::string>{};
    lhb.add("Test");
    BagInterface<std::string>& bagIntersection = lhb.intersectionWith(rhb);
    int expectedSize{0};
    int actualSize{bagIntersection.getCurrentSize()};
    std::string message{"The intersection with one empty bag should be empty"};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expectedSize, actualSize);
}

void IntersectionOperationsUnitTest::testBiggerLeftBag() {
    SetArrayBag<std::string> lhb = SetArrayBag<std::string>{};
    SetArrayBag<std::string> rhb = SetArrayBag<std::string>{};
    lhb.add("Test");
    lhb.add("Case");
    rhb.add("Test");
    BagInterface<std::string>& bagIntersection = lhb.intersectionWith(rhb);
    int expectedSize{1};
    int actualSize{bagIntersection.getCurrentSize()};
    std::string message{"The intersection of these two non-empty bag should have 1 item"};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expectedSize, actualSize);
}

void IntersectionOperationsUnitTest::testBiggerRightBag() {
    SetArrayBag<std::string> lhb = SetArrayBag<std::string>{};
    SetArrayBag<std::string> rhb = SetArrayBag<std::string>{};
    lhb.add("Test");
    rhb.add("Test");
    rhb.add("Case");
    BagInterface<std::string>& bagIntersection = lhb.intersectionWith(rhb);
    int expectedSize{1};
    int actualSize{bagIntersection.getCurrentSize()};
    std::string message{"The intersection of these two non-empty bag should have 1 item"};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expectedSize, actualSize);
}

void IntersectionOperationsUnitTest::testSizeBookExample() {
    SetArrayBag<char> bag1{};
    bag1.add('a');
    bag1.add('b');
    bag1.add('c');

    SetArrayBag<char> bag2{};
    bag2.add('b');
    bag2.add('b');
    bag2.add('d');
    bag2.add('e');

    BagInterface<char>& result = bag1.intersectionWith(bag2);

    int expectedSize{1};
    int actualSize{(bag1.intersectionWith(bag2)).getCurrentSize()};
    std::string message{"Book size test should be 1"};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expectedSize, actualSize);
}

void IntersectionOperationsUnitTest::testFreqOfABookExample() {
    SetArrayBag<char> bag1{};
    bag1.add('a');
    bag1.add('b');
    bag1.add('c');

    SetArrayBag<char> bag2{};
    bag2.add('b');
    bag2.add('b');
    bag2.add('d');
    bag2.add('e');

    BagInterface<char>& result = bag1.intersectionWith(bag2);

    int expectedFrequency{0};
    int actualFrequency{result.getFrequencyOf('a')};
    std::string message{"Frequency of a should be 0"};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expectedFrequency, actualFrequency);
}

void IntersectionOperationsUnitTest::testFreqOfBBookExample() {
    SetArrayBag<char> bag1{};
    bag1.add('a');
    bag1.add('b');
    bag1.add('c');

    SetArrayBag<char> bag2{};
    bag2.add('b');
    bag2.add('b');
    bag2.add('d');
    bag2.add('e');

    BagInterface<char>& result = bag1.intersectionWith(bag2);

    int expectedFrequency{1};
    int actualFrequency{result.getFrequencyOf('b')};
    std::string message{"Frequency of b should be 1"};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expectedFrequency, actualFrequency);
}

void IntersectionOperationsUnitTest::testFreqOfCBookExample() {
    SetArrayBag<char> bag1{};
    bag1.add('a');
    bag1.add('b');
    bag1.add('c');

    SetArrayBag<char> bag2{};
    bag2.add('b');
    bag2.add('b');
    bag2.add('d');
    bag2.add('e');

    BagInterface<char>& result = bag1.intersectionWith(bag2);

    int expectedFrequency{0};
    int actualFrequency{result.getFrequencyOf('c')};
    std::string message{"Frequency of c should be 0"};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expectedFrequency, actualFrequency);
}

void IntersectionOperationsUnitTest::testFreqOfDBookExample() {
    SetArrayBag<char> bag1{};
    bag1.add('a');
    bag1.add('b');
    bag1.add('c');

    SetArrayBag<char> bag2{};
    bag2.add('b');
    bag2.add('b');
    bag2.add('d');
    bag2.add('e');

    BagInterface<char>& result = bag1.intersectionWith(bag2);

    int expectedFrequency{0};
    int actualFrequency{result.getFrequencyOf('d')};
    std::string message{"Frequency of d should be 0"};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expectedFrequency, actualFrequency);
}

void IntersectionOperationsUnitTest::testFreqOfEBookExample() {
    SetArrayBag<char> bag1{};
    bag1.add('a');
    bag1.add('b');
    bag1.add('c');

    SetArrayBag<char> bag2{};
    bag2.add('b');
    bag2.add('b');
    bag2.add('d');
    bag2.add('e');

    BagInterface<char>& result = bag1.intersectionWith(bag2);

    int expectedFrequency{0};
    int actualFrequency{result.getFrequencyOf('e')};
    std::string message{"Frequency of e should be 0"};
    CPPUNIT_ASSERT_EQUAL_MESSAGE(message, expectedFrequency, actualFrequency);
}
