/**
 * CSC232 Data Structures
 * Missouri State University
 *
 * @file    Queue.h
 * @author	Collin Tinen <vkt0516@live.missouristate.edu>
 * @brief   Header file for Queue.
 */

#pragma once
#ifndef QUEUE_H_HW06
#define QUEUE_H_HW06

#include "Node.h"

class Queue
{
private:
	Node* front;
	Node* back;
	int size;

public:
	Queue();
	bool isEmpty() const;
	bool enqueue(const Event& newEvent);
	bool dequeue();
	Event peekFront() const;
	int getSize() const;
};
#endif //QUEUE_H_HW06