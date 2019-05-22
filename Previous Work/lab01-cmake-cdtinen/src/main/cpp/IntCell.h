/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019.
 *
 * Lab01 - Software Development Tools: cmake and make
 *
 * @file   IntCell.h
 * @brief  IntCell specification.
 * @author Jim Daehn <jdaehn@missouristate.edu>
		Collin Tinen <vkt0516@live.missouristate.edu>
 */

#ifndef CSC232_INT_CELL_H__
#define CSC232_INT_CELL_H__

/**
 * A class for simulating an integer memory cell.
 */
class IntCell {
public:
    /**
     * IntCell constructor.
     * @param initialValue an int to store in this IntCell that defaults to 0 if one is not given
     * @post read() == initialValue
     */
    explicit IntCell(int initialValue = 0);

    /**
     * Copy constructor.
     * @param rhs An (lvalue) IntCell whose state is copied into this IntCell
     */
    IntCell(const IntCell &rhs) = default;

    /**
     * Move constructor.
     * @param rhs An (rvalue) IntCell whose state is moved into this IntCell.
     */
    IntCell(IntCell &&rhs) = default;

    /**
     * Copy assignment operator.
     * @param rhs An (lvalue) IntCell whose state is copied into this IntCell.
     * @return A reference to this IntCell is returned.
     */
    IntCell & operator=(const IntCell &rhs) = default;

    /**
     * Move assignment operator.
     * @param rhs rhs An (rvalue) IntCell whose state is moved into this IntCell.
     * @return A reference to this IntCell is returned.
     */
    IntCell & operator=(IntCell &&rhs) = default;

    /**
     * IntCell destructor.
     */
    ~IntCell() = default;

    /**
     * IntCell accessor method.
     * @return The int stored in this IntCell is returned.
     */
    int read() const;

    /**
     * IntCell mutator method.
     * @param x an int to store in this IntCell
     * @post read() == x
     */
    void write(int x);

private:
    int storedValue;
};

#endif // CSC232_INT_CELL_H__