/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Spring 2019
 *
 * @file   Main.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 *			Collin Tinen <vkt0516@live.missouristate.edu>
 * @file   Main.cpp
 * @brief  Lab 3; and exploration of dynamic programming approaches to the
 *         Fibonacci sequence.
 */

#include <cstdlib>
#include <iostream>
#include <map>
#include <memory>
#include "FibCalculator.h"
#include "TopDownFibCalculator.h"
#include "BottomUpFibCalculator.h"

/**
 * Entry point of this application.
 *
 * @return EXIT_SUCCESS upon successful completion.
 */
int main() {
    // The following three lines create "smart" pointers; don't worry about
    // the syntax -- you'll learn about it later -- just recognize that
    // calculator, topDownCalculator and bottomUpCalculator are pointers.
    std::unique_ptr<FibCalculator> calculator;
    auto topDownCalculator = std::make_unique<TopDownFibCalculator>();
    auto bottomUpCalculator = std::make_unique<BottomUpFibCalculator>();
    std::cout << "This program computes the nth Fibonacci number." << std::endl;
    std::cout << "To end this program, enter a negative value for n." << std::endl;
    std::cout << std::endl;

    int n{0};
    std::cout << "n = ";
    std::cin >> n;
    while (n >= 0) {
        calculator = std::move(topDownCalculator);
        std::cout << "Top-down approach: fib(" << n << ") = " << calculator->nthFibonacciNumber(n) << std::endl;
        calculator = std::move(bottomUpCalculator);
        std::cout << "Bottom-up approach: fib(" << n << ") = " << calculator->nthFibonacciNumber(n) << std::endl;
        std::cout << std::endl;
        std::cout << "n = ";
        std::cin >> n;
    }
    std::cout << std::endl << "Program has ended successfully. Good bye..." << std::endl;
}
