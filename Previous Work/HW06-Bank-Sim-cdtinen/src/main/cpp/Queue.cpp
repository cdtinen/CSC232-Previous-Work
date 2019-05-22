/**
 * CSC232 Data Structures
 * Missouri State University
 *
 * @file    Queue.cpp
 * @author	Collin Tinen <vkt0516@live.missouristate.edu>
 * @brief   Implementation of Queue.
 */

#include "Queue.h"

Queue::Queue()
{
	front = NULL;
	back = NULL;
	size = 0;
}

bool Queue::isEmpty() const
{
	return size == 0;
}

bool Queue::enqueue(const Event& newEvent)
{
	Node* newNode = new Node(newEvent);

	if (size == 0)
	{
		front = newNode;
		back = newNode;
	}
	else
	{
		back->setNext(newNode);
		back = back->getNext();
	}

	size++;

	return true;
}

bool Queue::dequeue()
{
	if (size == 0)
		return false;

	front = front->getNext();

	if (front == NULL)
		back = NULL;

	size--;

	return true;
}

Event Queue::peekFront() const
{
	if (size == 0)
	{
		cout << "Queue is empty!" << endl;
		return Event();
	}
	else
		return front->getData();
}

int Queue::getSize() const
{
	return size;
}