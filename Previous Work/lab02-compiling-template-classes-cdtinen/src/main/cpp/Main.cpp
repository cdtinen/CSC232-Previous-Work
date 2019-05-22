/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019.
 *
 * Lab02 - Strategies for Compiling Template Classes
 *
 * @file    Main.cpp
 * @brief   Entry point for lab02Demo target.
 *          This is a playground for you to experiment with the Cell, SimpleCell, and MemoryCell classes.
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 * 			Collin Tinen <vkt0516@live.missouristate.edu>
 */

#include <cstdlib>
#include <iostream>
#include "ExpandedTemplates.h"
#include "MemoryCell.h"
#include "SimpleMemoryCell.h"

int main() {
    std::cout << "Hello, Main!" << std::endl;

    MemoryCell<int> a{2};  // One-param constructor
    MemoryCell<int> b = a; // Copy constructor
    MemoryCell<int> c;     // Default (i.e., zero-param constructor)

    c = b;                 // Copy assignment

    a.write(4);            // Mutator method

    std::cout << a.read() << std::endl; // Accessor method
    std::cout << b.read() << std::endl; // Accessor method
    std::cout << c.read() << std::endl; // Accessor method

    SimpleMemoryCell<int> sa{2};   // One-param constructor
    SimpleMemoryCell<int> sb = sa; // Copy constructor
    SimpleMemoryCell<int> sc;      // Default (i.e., zero-param constructor)

    sc = sb;                       // Copy assignment

    sa.write(4);                   // Mutator method

    std::cout << sa.read() << std::endl; // Accessor method
    std::cout << sb.read() << std::endl; // Accessor method
    std::cout << sc.read() << std::endl; // Accessor method

    Cell<int> ca{};
    std::cout << ca.read() << std::endl;

    return EXIT_SUCCESS;
}
