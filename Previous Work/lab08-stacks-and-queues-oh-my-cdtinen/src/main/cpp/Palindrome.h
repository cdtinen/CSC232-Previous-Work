/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Spring 2019
 *
 * @file   Palindrome.h
 * @author Jim Daehn <jdaehn@missouristate.edu>
 */

#ifndef LAB08_PALINDROME_H
#define LAB08_PALINDROME_H

#include <string>

/**
 * A utility class that works with strings to create palindromes or assess strings for palindrome nature.
 *
 * DO NOT MODIFY THIS FILE!
 */
class Palindrome {
public:
    /**
     * Determines whether the given text is a palindrome.
     * @param text the text under interrogation
     * @return True is returned if the given text is a palindrome; false otherwise.
     */
    virtual bool isPalindrome(const std::string &text) const = 0;

    /**
     * Create a palindrome from the given text.
     * @param text the text to use as the basis for the generated palindrome
     * @return A palindrome based on the given text is returned.
     */
    virtual std::string makePalindrome(const std::string &text) const = 0;

    /**
     * Default destructor.
     */
    virtual ~Palindrome() = default;
};

#endif // LAB08_PALINDROME_H
