/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019.
 *
 * Lab02 - Strategies for Compiling Template Classes
 *
 * @file   Cell.cpp
 * @brief  Cell implementation.
 * @authors Jim Daehn <jdaehn@missouristate.edu>
			Collin Tinen <vkt0516@live.missouristate.edu>
 */

#include "Cell.h"

template <typename Object>
Cell<Object>::Cell(Object initialValue) : storedValue{initialValue} {
    /* Intentionally empty */
}

template <typename Object>
Object Cell<Object>::read() const {
    return storedValue;
}

template <typename Object>
void Cell<Object>::write(Object x) {
    storedValue = x;
}
