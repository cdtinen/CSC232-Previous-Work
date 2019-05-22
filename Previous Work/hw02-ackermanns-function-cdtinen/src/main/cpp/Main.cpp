/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019.
 *
 * HW02 - Ackermanns function.
 *
 * @file    Main.cpp
 * @brief   Entry point for hw01 target.
 *          This is a playground for you to experiment with your AckerReceiver class as it is developed.
 *          The AckerReceiver is ultimately used by the AckerInvoker.
 *
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 * 			Collin Tinen <vkt0516@live.missouristate.edu>
 */
#include <cstdlib>
#include <iostream>
#include "AckerInvoker.h"

int main() {
    std::cout << "Hello, Main!" << std::endl;
    AckerInvoker invoker{3, 3};

    std::cout << invoker.execute() << std::endl;

    return EXIT_SUCCESS;
}