/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019.
 *
 * Lab01 - Software Development Tools: cmake and make
 *
 * @file    Demo.cpp
 * @brief   Entry point for lab01Demo target.
 *          This is a playground for you to experiment with the IntCell class.
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 * TODO:    Collin Tinen <vkt0516@live.missouristate.edu>
 */

#include <cstdlib>
#include <iostream>
#include "IntCell.h"

int main() {
    std::cout << "Hello, Demo!" << std::endl;

    // auto will infer the type from the declaration
    auto a = new IntCell{2};  // One-param constructor
    auto b = a;               // Copy constructor
    IntCell *c;               // Default (i.e., zero-param constructor)

    c = b;          // Copy assignment

    a->write(4);    // Mutator method

    std::cout << a->read() << std::endl; // Accessor method
    std::cout << b->read() << std::endl; // Accessor method
    std::cout << c->read() << std::endl; // Accessor method

    return EXIT_SUCCESS;
}
