/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019.
 *
 * Lab02 - Strategies for Compiling Template Classes
 *
 * @file   SimpleSimpleMemoryCell.h
 * @brief  SimpleSimpleMemoryCell specification.
 * @authors Jim Daehn <jdaehn@missouristate.edu>
			Collin Tinen <vkt0516@live.missouristate.edu>
 */

#ifndef LAB02_SIMPLE_MEMORY_CELL_H
#define LAB02_SIMPLE_MEMORY_CELL_H

/**
 * A class for simulating a memory cell.
 * @tparam Object any type that has a zero-param constructor, operator=, and a copy constructor defined.
 */
template <typename Object>
class SimpleMemoryCell {
public:
    /**
     * IntCell constructor.
     * @param initialValue an int to store in this IntCell that defaults to 0 if one is not given
     * @post read() == initialValue
     */
    explicit SimpleMemoryCell(Object initialValue = 0) : storedValue{initialValue} {
        // Intentionally empty
    }

    /**
     * Copy constructor.
     * @param rhs An (lvalue) IntCell whose state is copied into this IntCell
     */
    SimpleMemoryCell(const SimpleMemoryCell &rhs) = default;

    /**
     * Move constructor.
     * @param rhs An (rvalue) IntCell whose state is moved into this IntCell.
     */
    SimpleMemoryCell(SimpleMemoryCell &&rhs) = default;

    /**
     * Copy assignment operator.
     * @param rhs An (lvalue) IntCell whose state is copied into this IntCell.
     * @return A reference to this IntCell is returned.
     */
    SimpleMemoryCell & operator=(const SimpleMemoryCell &rhs) = default;

    /**
     * Move assignment operator.
     * @param rhs rhs An (rvalue) IntCell whose state is moved into this IntCell.
     * @return A reference to this IntCell is returned.
     */
    SimpleMemoryCell & operator=(SimpleMemoryCell &&rhs) = default;

    /**
     * IntCell destructor.
     */
    ~SimpleMemoryCell() = default;

    /**
     * IntCell accessor method.
     * @return The int stored in this IntCell is returned.
     */
    Object read() const {
        return storedValue;
    }

    /**
     * IntCell mutator method.
     * @param x an int to store in this IntCell
     * @post read() == x
     */
    void write(Object x) {
        storedValue = x;
    }

private:
    Object storedValue;
};

#endif // LAB02_SIMPLE_MEMORY_CELL_H
