/**
 * CSC232 Data Structures
 * Missouri State University
 *
 * @file    Main.cpp
 * @author	Collin Tinen <vkt0516@live.missouristate.edu>
 * @brief   Main function file, contains simulator function, and runs it within main function.
 */

#include "Queue.h"
#include "PriorityQueue.h"
#include <fstream>

// simulator function implementation
void simulate()
{
	unsigned int eventsCount = 0;
	unsigned int totalArrivalTime = 0;
	unsigned int totalDepartureTime = 0;
	unsigned int totalProcessingTime = 0;
	double averageWaitingTime;

	string filename = "test.txt";
	ifstream dataFile;
	dataFile.open(filename);

	if (dataFile.fail())
	{
		cout << filename << " file cannot be opened!" << endl;
		cout << endl;
		system("pause");
		exit(EXIT_FAILURE);
	}

	Queue bankQueue;
	PriorityQueue eventListPQueue;

	bool tellerAvailable = true;

	int a, t;
	while (dataFile >> a >> t)
	{
		Event newArrivalEvent(a, t);
		eventListPQueue.enqueue(newArrivalEvent);
	}
	dataFile.close();

	cout << "Simulation Begins" << endl;

	while (!eventListPQueue.isEmpty())
	{
		Event newEvent = eventListPQueue.peekFront();

		unsigned int currentTime = newEvent.getArrivalTime();
		if (newEvent.getEventType() == 'A')
		{
			eventListPQueue.dequeue();
			Event customer = newEvent;
			if (bankQueue.isEmpty() && tellerAvailable)
			{
				unsigned int departureTime = currentTime + newEvent.getTransactionTime();
				Event newDepartureEvent(departureTime, 0, 'D');
				eventListPQueue.enqueue(newDepartureEvent);
				tellerAvailable = false;
			}
			else
			{
				bankQueue.enqueue(customer);
			}

			cout << "Processing an arrival event at time:\t" << customer.getArrivalTime() << endl;
			eventsCount++;
			totalArrivalTime += customer.getArrivalTime();
			totalProcessingTime += customer.getTransactionTime();
		}
		else
		{
			eventListPQueue.dequeue();

			if (!bankQueue.isEmpty())
			{
				Event customer = bankQueue.peekFront();
				bankQueue.dequeue();
				int departureTime = currentTime + customer.getTransactionTime();
				Event newDepartureEvent(departureTime, 0, 'D');
				eventListPQueue.enqueue(newDepartureEvent);
			}
			else
			{
				tellerAvailable = true;
			}

			cout << "Processing a departure event at time:\t" << currentTime << endl;
			totalDepartureTime += currentTime;
		}
	}

	averageWaitingTime = (double)(totalDepartureTime - totalProcessingTime - totalArrivalTime) / eventsCount;

	cout << "Simulation Ends" << endl << endl;
	cout << "Final Statistics:" << endl << endl;
	cout << "\tTotal number of people processed: " << eventsCount << endl;
	cout << "\tAverage amount of time spent waiting: " << averageWaitingTime << endl;

} // end of simulate function

// start main function
int main()
{
	simulate();

	cout << endl;
	system("pause");
	return 0;
} // end of main function