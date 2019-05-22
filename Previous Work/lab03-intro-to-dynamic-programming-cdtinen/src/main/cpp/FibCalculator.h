/**
 * CSC232 Data Structures with C++
 * Missouri State University, Spring 2019
 *
 * @file    FibCalculator.h
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Specification of FibCalculator interface.
*/

#ifndef LAB03_FIB_CALCULATOR_H__
#define LAB03_FIB_CALCULATOR_H__

/**
 * A calculator that computes values related to the Fibonacci sequence.
 * Note: It is assumed that the "first" Fibonacci number is associated
 * with n = 0. That is,
 *
 * fib(n) = 1 if n == 0 or n == 1
 *        = fib(n - 1) + fib(n - 2) for n > 1
 *
 * In other words,
 *
 * n:      0   1   2   3   4   5 ...
 * fib(n): 1   1   2   3   5   8 ...
 */
class FibCalculator {
public:
    /**
     * Calculate the nth Fibonacci number.
     *
     * @pre n >= 0
     * @param n an index into the Fibonacci sequence beginning at 0.
     * @return The nth number in the Fibonacci sequence is returned.
     */
    virtual int nthFibonacciNumber(int n) const = 0;
};

#endif // LAB03_FIB_CALCULATOR_H__
