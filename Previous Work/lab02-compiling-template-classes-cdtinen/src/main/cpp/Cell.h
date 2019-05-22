/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019.
 *
 * Lab02 - Strategies for Compiling Template Classes
 *
 * @file   Cell.h
 * @brief  Cell specification.
 * @authors Jim Daehn <jdaehn@missouristate.edu>
			Collin Tinen <vkt0516@live.missouristate.edu>
 */

#ifndef LAB02_CELL_H
#define LAB02_CELL_H

template <typename Object>
class Cell {
public:
    /**
     * IntCell constructor.
     * @param initialValue an int to store in this IntCell that defaults to 0 if one is not given
     * @post read() == initialValue
     */
    explicit Cell(Object initialValue = 0);

    /**
     * Copy constructor.
     * @param rhs An (lvalue) IntCell whose state is copied into this IntCell
     */
    Cell(const Cell &rhs) = default;

    /**
     * Move constructor.
     * @param rhs An (rvalue) IntCell whose state is moved into this IntCell.
     */
    Cell(Cell &&rhs) = default;

    /**
     * Copy assignment operator.
     * @param rhs An (lvalue) IntCell whose state is copied into this IntCell.
     * @return A reference to this IntCell is returned.
     */
    Cell & operator=(const Cell &rhs) = default;

    /**
     * Move assignment operator.
     * @param rhs rhs An (rvalue) IntCell whose state is moved into this IntCell.
     * @return A reference to this IntCell is returned.
     */
    Cell & operator=(Cell &&rhs) = default;

    /**
     * IntCell destructor.
     */
    ~Cell() = default;

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


#endif //LAB02_CELL_H
