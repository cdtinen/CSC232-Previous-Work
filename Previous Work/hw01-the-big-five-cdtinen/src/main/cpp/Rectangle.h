/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019.
 *
 * HW01 - The Big Five
 *
 * @file    Rectangle.h
 * @brief   Rectangle specification.
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 *			Collin Tinen <vkt0516@live.missouristate.edu>
 */

#ifndef CSC232_HW01_RECTANGLE_H__
#define CSC232_HW01_RECTANGLE_H__
#include <utility>

/**
 * An abstraction of a two-dimensional shape.
 */
class Rectangle {
public:
    /**
     * Rectangle constructor.
     * @param length the initial length of this Rectangle
     * @param height the initial height of this Rectangle
     */
    explicit Rectangle(double length = 0, double height = 0);

    // TODO: Implement the Big-Five, one at a time.
    // Once one is implemented, erase the "= delete" and
    // Update the values in src/test/cpp/TestDriver accordingly

    /**
     * Rectangle destructor.
     * @post Memory occupied by length and height is freed.
     */
	~Rectangle();

    /**
     * Rectangle copy constructor.
     * @param rhs the (lvalue) Rectangle whose state is copied into this Rectangle upon construction
     * @post getLength() == rhs.getLength() && getHeight() == rhs.getHeight()
     */
	Rectangle(const Rectangle &rhs);

    /**
     * Rectangle move constructor.
     * @param rhs the (rvalue) Rectangle whose state is moved into this Rectangle upon construction
     * @post getLength() == rhs.getLength() && getHeight() == rhs.getHeight()
     */
	Rectangle(Rectangle &&rhs);

    /**
     * Copy assignment.
     * @param rhs the (lvalue) Rectangle whose state is copied into this Rectangle upon assignment
     * @return A reference to this Rectangle is returned.
     * @post getLength() == rhs.getLength() && getHeight() == rhs.getHeight()
     */
	Rectangle &operator=(const Rectangle &rhs);


    /**
     * Move assignment.
     * @param rhs the (rvalue) Rectangle whose state is moved into this Rectangle upon assignment
     * @return A reference to this Rectangle is returned.
     * @post getLength() == rhs.getLength() && getHeight() == rhs.getHeight()
     */
	Rectangle &operator=(Rectangle &&rhs);


    /**
     * Length accessor for this Rectangle.
     * @return The length of this Rectangle is returned.
     */
    double getLength() const;

    /**
     * Length mutator for this Rectangle.
     * @param length the new length to assign to this Rectangle
     * @post getLength() == length
     */
    void setLength(double length);

    /**
     * Height accessor for this Rectangle.
     * @return The height of this Rectangle is returned.
     */
    double getHeight() const;

    /**
     * Height mutator for this Rectangle.
     * @param height the new height to assign to this Rectangle
     * @post getHeight() == height
     */
    void setHeight(double height);

private:
    double *length;
    double *height;
};

#endif // CSC232_HW01_RECTANGLE_H__
