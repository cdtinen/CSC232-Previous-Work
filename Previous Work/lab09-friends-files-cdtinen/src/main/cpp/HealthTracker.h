/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Spring 2019
 *
 * @file      HealthTrack.h
 * @authors   Jim Daehn <jdaehn@missouristate.edu>
 *            Collin Tinen <vkt0516@live.missouristate.edu>
 */

#ifndef LAB09_HEALTHTRACKER_H
#define LAB09_HEALTHTRACKER_H
#include <iostream>
#include <vector>

class HealthTracker {
private:

	double weight, fatPercent;
	//std::vector<HealthTracker> healthVector;

public:

	HealthTracker(double w, double f);
	double getWeight() const;
	double getFpercent() const;
	void setWeight(double w);
	void setFpercent(double f);
	double avgW(std::vector<HealthTracker> healthVector);
	double avgFP(std::vector<HealthTracker> healthVector);

    friend std::ostream& operator<<(std::ostream& os, const HealthTracker& healthTracker);
};

#endif //LAB09_HEALTHTRACKER_H