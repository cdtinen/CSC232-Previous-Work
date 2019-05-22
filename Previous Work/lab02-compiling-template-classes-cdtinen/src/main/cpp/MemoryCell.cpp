/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019.
 *
 * Lab02 - Strategies for Compiling Template Classes
 *
 * @file   MemoryCell.cpp
 * @brief  MemoryCell implementation.
 * @authors Jim Daehn <jdaehn@missouristate.edu>
		    Collin Tinen <vkt0516@live.missouristate.edu>
 */

#include "MemoryCell.h"

template <typename Object>
MemoryCell<Object>::MemoryCell(Object initialValue) : storedValue{initialValue} {
    /* Intentionally empty */
}

template <typename Object>
Object MemoryCell<Object>::read() const {
    return storedValue;
}

template <typename Object>
void MemoryCell<Object>::write(Object x) {
    storedValue = x;
}
