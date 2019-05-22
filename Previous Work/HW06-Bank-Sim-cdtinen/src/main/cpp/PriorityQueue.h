/**
 * CSC232 Data Structures
 * Missouri State University
 *
 * @file    PriorityQueue.h
 * @author	Collin Tinen <vkt0516@live.missouristate.edu>
 * @brief   Header file for Priority Queue.
 */

#pragma once
#ifndef PRIORITYQUEUE_H_HW06
#define PRIORITYQUEUE_H_HW06

#include "Node.h"

class PriorityQueue
{
private:
	Node* front;
	int size;

public:
	PriorityQueue();
	bool isEmpty() const;
	bool enqueue(const Event& newEvent);
	bool dequeue();
	Event peekFront() const;
	int getSize() const;
};
#endif //PRIORITYQUEUE_H_HW06