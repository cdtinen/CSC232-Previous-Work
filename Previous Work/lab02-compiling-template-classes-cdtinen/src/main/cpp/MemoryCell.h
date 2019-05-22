/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019.
 *
 * Lab02 - Strategies for Compiling Template Classes
 *
 * @file   MemoryCell.h
 * @brief  MemoryCell specification.
 * @authors Jim Daehn <jdaehn@missouristate.edu>
			Collin Tinen <vkt0516@live.missouristate.edu>
 */

#ifndef CSC232_MEMORY_CELL_H__
#define CSC232_MEMORY_CELL_H__

/**
 * A class for simulating a memory cell.
 * @tparam Object any type that has a zero-param constructor, operator=, and a copy constructor defined.
 */
template <typename Object>
class MemoryCell {
public:
    /**
     * IntCell constructor.
     * @param initialValue an int to store in this IntCell that defaults to 0 if one is not given
     * @post read() == initialValue
     */
    explicit MemoryCell(Object initialValue = 0);

    /**
     * Copy constructor.
     * @param rhs An (lvalue) IntCell whose state is copied into this IntCell
     */
    MemoryCell(const MemoryCell &rhs) = default;

    /**
     * Move constructor.
     * @param rhs An (rvalue) IntCell whose state is moved into this IntCell.
     */
    MemoryCell(MemoryCell &&rhs) = default;

    /**
     * Copy assignment operator.
     * @param rhs An (lvalue) IntCell whose state is copied into this IntCell.
     * @return A reference to this IntCell is returned.
     */
    MemoryCell & operator=(const MemoryCell &rhs) = default;

    /**
     * Move assignment operator.
     * @param rhs rhs An (rvalue) IntCell whose state is moved into this IntCell.
     * @return A reference to this IntCell is returned.
     */
    MemoryCell & operator=(MemoryCell &&rhs) = default;

    /**
     * IntCell destructor.
     */
    ~MemoryCell() = default;

    /**
     * IntCell accessor method.
     * @return The int stored in this IntCell is returned.
     */
    Object read() const;

    /**
     * IntCell mutator method.
     * @param x an int to store in this IntCell
     * @post read() == x
     */
    void write(Object x);

private:
    Object storedValue;
};

#include "MemoryCell.cpp"

#endif // CSC232_INT_CELL_H__
