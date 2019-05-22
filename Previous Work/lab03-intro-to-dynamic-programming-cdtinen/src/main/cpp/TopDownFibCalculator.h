/**
 * CSC232 Data Structures with C++
 * Missouri State University, Spring 2019
 *
 * @file    TopDownFibCalculator.h
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 *          Collin Tinen <vkt0516@live.missouristate.edu>
 * @brief   Specification of TopDownFibCalculator.
 */

#ifndef LAB03_TOP_DOWN_FIB_CALCULATOR_H__
#define LAB03_TOP_DOWN_FIB_CALCULATOR_H__

#include "FibCalculator.h"

/**
 * An implementation of the <code>FibCalculator</code> that uses top-down dynamic programming approaches where
 * appropriate.
 */
class TopDownFibCalculator : public FibCalculator {
public:

    /**
     * Default constructor.
     */
    TopDownFibCalculator() = default;

    /**
     * Calculates the nth Fibonacci number using a top-down, dynamic programming approach.
     *
     * @pre n >= 0
     * @param n an index into the Fibonaaci sequence beginning at 0.
     * @return The nth number in the Fibonacci sequence is returned.
     */
    int nthFibonacciNumber(int n) const override;

    /**
     * Default destructor.
     */
    virtual ~TopDownFibCalculator() = default;
};

#endif //LAB03_TOP_DOWN_FIB_CALCULATOR_H__
