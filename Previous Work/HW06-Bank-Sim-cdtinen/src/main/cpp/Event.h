/**
 * CSC232 Data Structures
 * Missouri State University
 *
 * @file    Event.h
 * @author	Collin Tinen <vkt0516@live.missouristate.edu>
 * @brief   Header file for Event.
 */

#pragma once
#ifndef EVENT_H_HW06
#define EVENT_H_HW06

#include <iostream>
#include <string>
using namespace std;

class Event
{
private:
	char eventType;
	unsigned int arrivalTime;
	unsigned int transactionTime;

public:
	Event();
	Event(unsigned int arrTime, unsigned int transTime);
	Event(unsigned int arrTime, unsigned int transTime, char type);

	unsigned int getArrivalTime() const;
	unsigned int getTransactionTime() const;
	char getEventType() const;
};
#endif //EVENT_H_HW06