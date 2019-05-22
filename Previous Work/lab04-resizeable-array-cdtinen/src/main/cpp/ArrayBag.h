/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Fall 2017
 *
 * @file      ArrayBag.h
 * @authors   Frank M. Carrano and Tim Henry
 *            Jim Daehn <jdaehn@missouristate.edu>
 * @copyright 2016 __Pearson Education__. All rights reserved.
 */

#ifndef BAG_ARRAYBAG_H
#define BAG_ARRAYBAG_H

#include <vector>
#include "Bag.h"

template <typename Object>
class ArrayBag : public Bag<Object> {
public:
    ArrayBag();
    virtual int getCurrentSize() const override;
    virtual bool isEmpty() const override;
    virtual bool add(const Object& newEntry) override;
    virtual bool remove(const Object& anObject) override;
    virtual void clear() override;
    virtual bool contains(const Object& anEntry) const override;
    virtual int getFrequencyOf(const Object& anEntry) const override;
    virtual std::vector<Object> toVector()const override;
    virtual ~ArrayBag() = default;

private:
    // attributes
    static const int DEFAULT_BAG_SIZE = 10;
    Object items[DEFAULT_BAG_SIZE];
    int itemCount;
    int maxItems;
    // operations
    int getIndexOf(const Object& target) const;
};

#endif //BAG_ARRAYBAG_H
