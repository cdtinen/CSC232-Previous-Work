/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Fall 2017
 *
 * @file    DoublingStrategy.h
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 */

#ifndef LAB07_DOUBLINGSTRATEGY_H
#define LAB07_DOUBLINGSTRATEGY_H

#include "ResizingStrategy.h"

template <typename Object>
class DoublingStrategy : public ResizingStrategy<Object> {
public:
    DoublingStrategy() = default;
    size_t resize(Object*& array, const size_t currentSize) override;
    virtual ~DoublingStrategy() = default;
};

#endif //LAB07_DOUBLINGSTRATEGY_H
