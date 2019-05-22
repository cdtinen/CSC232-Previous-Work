/**
 * CSC232 Data Structures with C++
 * Missouri State University, Spring 2019
 *
 * @file    BottomUpFibCalculator.h
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 *          Collin Tinen <vkt0516@live.missouristate.edu>
 * @brief   Specification of BottomUpFibCalculator.
 */

#ifndef LAB03_BOTTOM_UP_FIB_CALCULATOR_H__
#define LAB03_BOTTOM_UP_FIB_CALCULATOR_H__

#include "FibCalculator.h"

/**
 * An implementation of the <code>FibCalculator</code> that uses bottom-up dynamic programming approaches where
 * appropriate.
 */
class BottomUpFibCalculator : public FibCalculator {
public:
    /**
     * Default constructor.
     */
    BottomUpFibCalculator() = default;

    /**
     * Calculates the nth Fibonacci number using a bottom-up, dynamic programming approach.
     *
     * @pre n >= 0
     * @param n an index into the Fibonacci sequence beginning at 0.
     * @return The nth number in the Fibonacci sequence is returned.
     */
    int nthFibonacciNumber(int n) const override;

    /**
     * Default destructor.
     */
    virtual ~BottomUpFibCalculator() = default;
};

#endif //LAB03_BOTTOM_UP_FIB_CALCULATOR_H__
