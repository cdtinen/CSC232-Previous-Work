/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019.
 *
 * Lab01 - Software Development Tools: cmake and make
 *
 * @file   IntCell.cpp
 * @brief  IntCell implementation.
 * @author Jim Daehn <jdaehn@missouristate.edu>
		Collin Tinen <vkt0516@live.missouristate.edu>
 */

#include "IntCell.h"

IntCell::IntCell(int initialValue) : storedValue{initialValue} {
    /* Intentionally empty */
}

int IntCell::read() const {
    return storedValue;
}

void IntCell::write(int x) {
    storedValue = x;
}
