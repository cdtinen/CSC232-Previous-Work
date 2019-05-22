/**
 * CSC232 Data Structures
 * Missouri State University
 *
 * @file    Node.cpp
 * @author	Collin Tinen <vkt0516@live.missouristate.edu>
 * @brief   Implementation of Node.
 */

#include "Node.h"

Node::Node()
{
	data = Event();
	next = NULL;
}

Node::Node(Event newData)
{
	data = newData;
	next = NULL;
}

Node::Node(Event newData, Node* newNext)
{
	data = newData;
	next = newNext;
}

Event Node::getData() const
{
	return data;
}

Node* Node::getNext() const
{
	return next;
}

void Node::setData(Event newData)
{
	data = newData;
}

void Node::setNext(Node* newNext)
{
	next = newNext;
}