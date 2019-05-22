/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Fall 2017
 *
 * @file   AbstractClass.h
 * @author Jim Daehn <jdaehn@missouristate.edu>
 */

#ifndef LAB07_ABSTRACTCLASS_H
#define LAB07_ABSTRACTCLASS_H

class AbstractClass {
public:
    void templateMethod() {
        value += 1; // one or more operations as part of the skeletal structure
        primitiveMethod(); // to be defined by some subclass
        value -= 1; // one or more operations as part of the skeletal structure
    }

protected: // This is effectively private to clients but public to subclasses
    virtual void primitiveMethod() = 0;

private:
    int value;
};


#endif //LAB07_ABSTRACTCLASS_H
