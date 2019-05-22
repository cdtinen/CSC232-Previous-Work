/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Fall 2017
 *
 * @file    ExpandedTemplates.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
			Collin Tinen <vkt0516@live.missouristate.edu>
 */

#include "ArrayBag.cpp"
#include "BumpStrategy.cpp"
#include "DoublingStrategy.cpp"
#include "ResizableArrayBag.cpp"

template class ResizableArrayBag<int>;
template class ResizableArrayBag<double>;
template class DoublingStrategy<int>;
template class BumpStrategy<double>;