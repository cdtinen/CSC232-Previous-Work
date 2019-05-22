/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019.
 *
 * Lab02 - Strategies for Compiling Template Classes
 *
 * @file    Demo.cpp
 * @brief   Entry point for lab02Demo target.
 *          This is a playground for you to experiment with the Cell, SimpleCell, and MemoryCell classes.
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 * 		    Collin Tinen <vkt0516@live.missouristate.edu>
 */

#include <cstdlib>
#include <iostream>
#include "MemoryCell.h"

int main() {
    std::cout << "Hello, Demo!" << std::endl;

    // auto will infer the type from the declaration
    auto a = new MemoryCell<int>{2};  // One-param constructor
    auto b = a;                       // Copy constructor
    MemoryCell<int> *c;               // Default (i.e., zero-param constructor)

    c = b;          // Copy assignment

    a->write(4);    // Mutator method

    std::cout << a->read() << std::endl; // Accessor method
    std::cout << b->read() << std::endl; // Accessor method
    std::cout << c->read() << std::endl; // Accessor method

    return EXIT_SUCCESS;
}
