/**
 * CSC232 Data Structures
 * Missouri State University
 *
 * @file    SetArrayBag.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 *          Collin Tinen <vkt0516@live.missouristate.edu>
 *
 * @brief   Implementation file for an set supporting, array-based implementation of the ADT bag.
 */

#include "SetArrayBag.h"

template<typename ItemType>
BagInterface<ItemType> &SetArrayBag<ItemType>::unionWith(const BagInterface<ItemType> &bag) {
    BagInterface<ItemType> *unionBag = new SetArrayBag{};

    for (auto item : ArrayBag<ItemType>::toVector()) {
        unionBag->add(item);
    }
    
    for (auto item : bag.toVector()) {
        unionBag->add(item);
    }
    
    return *unionBag;
}

template<typename ItemType>
BagInterface<ItemType>& SetArrayBag<ItemType>::intersectionWith(const BagInterface<ItemType> &bag) {
    BagInterface<ItemType> *intersectionBag = new SetArrayBag{};

    for (auto item1 : ArrayBag<ItemType>::toVector()) {
	int i = 0;	//Set index to 0
		for (auto item2 : bag.toVector()) {
			if (item1 == item2) {	//Check if item1 and item2 are equal
			intersectionBag->add(item1);	//Add item1 by pointer
			bag.toVector().erase(bag.toVector().begin()+i);	//Erase index from bag.toVector
			i++;	//Increment index
			break;
			}
			else {
			i++;
			}
		}
	}
    return *intersectionBag;
}

template<typename ItemType>
BagInterface<ItemType>& SetArrayBag<ItemType>::differenceWith(const BagInterface<ItemType> &bag) {
    BagInterface<ItemType> *differenceBag = new SetArrayBag{};

    for (auto item1 : ArrayBag<ItemType>::toVector()) {
		for (auto item2 : bag.toVector()) {
			if (!ArrayBag<ItemType>::contains(item2)) {	//Check if array bag contains item2
			differenceBag->add(item1);	//Add item1 by pointer
			}
		}
	}

    return *differenceBag;
}
