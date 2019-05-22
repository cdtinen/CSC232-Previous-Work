/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019.
 *
 * Lab01 - Software Development Tools: cmake and make
 *
 * @file    Main.cpp
 * @brief   Entry point for lab01 target.
 *          This is a playground for you to experiment with the IntCell class.
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 * TODO:    Collin Tinen <vkt0516@live.missouristate.edu>
 */

#include <cstdlib>
#include <iostream>
#include "IntCell.h"

int main() {
    std::cout << "Hello, Main!" << std::endl;

    IntCell a{2};  // One-param constructor
    IntCell b = a; // Copy constructor
    IntCell c;     // Default (i.e., zero-param constructor)

    c = b;         // Copy assignment

    a.write(4);    // Mutator method

    std::cout << a.read() << std::endl; // Accessor method
    std::cout << b.read() << std::endl; // Accessor method
    std::cout << c.read() << std::endl; // Accessor method

    return EXIT_SUCCESS;
}
