/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Spring 2019
 *
 * @file   Palindrominator.h
 * @author Jim Daehn <jdaehn@missouristate.edu>
 */

#ifndef LAB08_PALINDROMINATOR_H
#define LAB08_PALINDROMINATOR_H

#include "Palindrome.h"
#include <stack>
#include <queue>

/**
 * A palindrome utility class used to create palindromes in one of two ways or to assess palindrome properties of some
 * text. Palindromes are created by either appending the reversal of the given text or prepending the reverse of the
 * given text.
 *
 * For example, if this utility were given the string "abc" the two possible palindromes it could create are:
 *
 * abccba <-- this is created by appending the reverse of "abc" to the given string; this is the default behavior, i.e.,
 * one could create an instance of this class using the default constructor or by explicitly passing true to the
 * constructor, e.g., Palindrominator appender; or Palindrominator explicitAppender{true};
 *
 * cbaabc <-- this is created by prepending the reverse of "abc" to the given string; this is done by creating an
 * instance of this class with false passed to the constructor, e.g., Palindrominator prepender{false};
 *
 * DO NOT MODIFY THIS FILE!
 */
class Palindrominator : public Palindrome {
public:
    /**
     * Explicit initializing constructor.
     * @param append if true, when asked to create a palindrome, this utility does so by appending text; if false this
     * utility does so by prepending text.
     */
    explicit Palindrominator(bool append = true);

    /**
     * Default destructor.
     */
    ~Palindrominator() = default;

    /**
     * Determines whether the given text is a palindrome.
     * @param text the text under interrogation
     * @return True is returned if the given text is a palindrome; false otherwise.
     */
    bool isPalindrome(const std::string &text) const override;

    /**
     * Create a palindrome from the given text. The default behavior is do this by appending the reverse of text to
     * text. Alternatively, if this Palindrominator was instantiated with a false initializer, the palindrome is created
     * by prepending the reverse of text to text.
     * @param text the text to use as the basis for the generated palindrome
     * @return A palindrome based on the given text and construction behavior defined during construction is returned.
     */
    std::string makePalindrome(const std::string &text) const override;

private:
    /**
     * A flag that determines the behavior of makePalindrome. If initialized to true (the default) then palindromes are
     * created by appending the reverse of the given text to the given text. If false, then palindromes are created by
     * prepending the reverse of the given text to the given text.
     */
    bool append_;
};


#endif // LAB08_PALINDROMINATOR_H
