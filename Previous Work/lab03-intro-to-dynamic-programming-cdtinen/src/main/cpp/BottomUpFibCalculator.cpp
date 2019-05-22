/**
 * CSC232 Data Structures with C++
 * Missouri State University, Spring 2019
 *
 * @file    BottomUpFibCalculator.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 *          Collin Tinen <vkt0516@live.missouristate.edu>
 * @brief   Definition of BottomUpFibCalculator.
 */

#include "BottomUpFibCalculator.h"

int BottomUpFibCalculator::nthFibonacciNumber(int n) const {
	if (n = 0) {
		return 1;
	}
	else {
		int previousFib = 0, currentFib = 1;
		for (int i = 0; i < n - 1; i++) {
			int newFib = previousFib + currentFib;
			previousFib = currentFib;
			currentFib = newFib;
		}
		return currentFib;

	}
}
