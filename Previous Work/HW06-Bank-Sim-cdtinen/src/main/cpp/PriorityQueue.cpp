/**
 * CSC232 Data Structures
 * Missouri State University
 *
 * @file    PriorityQueue.cpp
 * @author	Collin Tinen <vkt0516@live.missouristate.edu>
 * @brief   Implementation of Priority Queue.
 */

#include "PriorityQueue.h"

PriorityQueue::PriorityQueue()
{
	front = NULL;
	size = 0;
}

bool PriorityQueue::isEmpty() const
{
	return size == 0;
}

bool PriorityQueue::enqueue(const Event& newEvent)
{
	if (&newEvent == NULL)
		return false;

	if (front == NULL || newEvent.getArrivalTime() < front->getData().getArrivalTime())
	{
		front = new Node(newEvent, front);
		size++;
		return true;
	}

	Node* current = front;
	Node* previous = NULL;

	while (current != NULL && (newEvent.getArrivalTime() > current->getData().getArrivalTime()))
	{
		previous = current;
		current = current->getNext();
	}

	if (current != NULL && (newEvent.getEventType() == 'D' && current->getData().getEventType() == 'A'))
	{
		if (newEvent.getArrivalTime() == current->getData().getArrivalTime())
		{
			previous = current;
			current = current->getNext();
		}
	}

	Node* newNode = new Node(newEvent, previous->getNext());
	previous->setNext(newNode);
	size++;
	return true;
}

bool PriorityQueue::dequeue()
{
	if (size == 0)
		return false;

	front = front->getNext();
	size--;

	return true;
}

Event PriorityQueue::peekFront() const
{
	if (size == 0)
	{
		cout << "Priority Queue is empty!" << endl;
		return Event();
	}
	else
		return front->getData();
}

int PriorityQueue::getSize() const
{
	return size;
}