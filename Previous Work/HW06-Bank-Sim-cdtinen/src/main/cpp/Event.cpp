/**
 * CSC232 Data Structures
 * Missouri State University
 *
 * @file    Event.cpp
 * @author	Collin Tinen <vkt0516@live.missouristate.edu>
 * @brief   Implementation of Event.
 */

#include "Event.h"

Event::Event()
{
   arrivalTime = 0;
   transactionTime = 0;
   eventType = ' ';
}

Event::Event(unsigned int arrTime, unsigned int transTime)
{
   arrivalTime = arrTime;
   transactionTime = transTime;
   eventType = 'A';
}

Event::Event(unsigned int arrTime, unsigned int transTime, char type)
{
   arrivalTime = arrTime;
   transactionTime = transTime;
   eventType = type;
}

unsigned int Event::getArrivalTime() const
{
   return arrivalTime;
}

unsigned int Event::getTransactionTime() const
{
   return transactionTime;
}

char Event::getEventType() const
{
   return eventType;
}