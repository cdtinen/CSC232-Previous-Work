/**
 * CSC232 Data Structures
 * Missouri State University
 *
 * @file    Node.h
 * @author	Collin Tinen <vkt0516@live.missouristate.edu>
 * @brief   Header file for Node.
 */

#pragma once
#ifndef NODE_H_HW06
#define NODE_H_HW06

#include "Event.h"

class Node
{
private:
	Event data;
	Node* next;

public:
	Node();
	Node(Event newData);
	Node(Event newData, Node* newNext);

	Event getData() const;
	Node* getNext() const;
	void setData(Event newData);
	void setNext(Node* newNext);
};
#endif //NODE_H_HW06