/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019.
 *
 * HW01 - The Big Five
 *
 * @file   Rectangle.h
 * @brief  Rectangle implementation.
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 *			Collin Tinen <vkt0516@live.missouristate.edu>
 */

#include "Rectangle.h"
#include <utility>
Rectangle::Rectangle(double length, double height) : length{new double{length}}, height{new double{height}} {
    // Intentionally empty
}

// TODO: Implement the Big-Five in the space below (above getLength())
Rectangle::~Rectangle()
{
	delete length;
	delete height;
}

Rectangle::Rectangle(const Rectangle & rhs)
{
	height = new double{ *rhs.height };
	length = new double{ *rhs.length };
}

Rectangle::Rectangle(Rectangle &&rhs)
{
	rhs.height = nullptr;
	rhs.length = nullptr;
}

Rectangle & Rectangle::operator=(const Rectangle &rhs)
{
	if (this != &rhs) {
		*length = *rhs.length;
		*height = *rhs.height;
	}
	return *this;
}

Rectangle & Rectangle::operator=(Rectangle &&rhs)
{
	std::swap(length, rhs.length);
	std::swap(height, rhs.height);
	return *this;
}
// DO NOT MODIFY ANYTHING BELOW THIS LINE

double Rectangle::getLength() const {
    return *length;
}

void Rectangle::setLength(double length) {
    *Rectangle::length = length;
}

double Rectangle::getHeight() const {
    return *height;
}

void Rectangle::setHeight(double height) {
    *Rectangle::height = height;
}
