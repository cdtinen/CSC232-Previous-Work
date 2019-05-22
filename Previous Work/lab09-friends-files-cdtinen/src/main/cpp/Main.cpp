/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Spring 2019
 *
 * @file      Main.cpp
 * @authors   Jim Daehn <jdaehn@missouristate.edu>
 */

#include <cstdlib>
#include <fstream>
#include <iostream>

int main(int argc, char* argv[]) {
    std::cout << "Hello, Main!" << std::endl;
    std::ifstream data{"input.dat"};
    if (!data) {
        std::cerr << "Error opening input.dat..." << std::endl;
        return EXIT_FAILURE;
    }

    double weight;
    double fatPercent;

    while (data >> weight >> fatPercent) {
        std::cout << "Weight: " << weight << std::endl;
        std::cout << "Fat Percent:" << fatPercent << std::endl;
    }

    data.close();
    return EXIT_SUCCESS;
}