/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Spring 2019
 *
 * @file      HealthTrack.cpp
 * @authors   Jim Daehn <jdaehn@missouristate.edu>
 *            Collin Tinen <vkt0516@live.missouristate.edu>
 */

#include "HealthTracker.h"

HealthTracker::HealthTracker(double w, double f)
{
	weight = w;
	fatPercent = f;
}

double HealthTracker::getWeight() const
{
	return weight;
}

double HealthTracker::getFpercent() const
{
	return fatPercent;
}

void HealthTracker::setWeight(double w)
{
	weight = w;
}

void HealthTracker::setFpercent(double f)
{
	fatPercent = f;
}

double HealthTracker::avgW(std::vector<HealthTracker> healthVector)
{
	double addedweight = 0;

	for (int i = 0; i < healthVector.size() - 1; i++) {
		addedweight += healthVector[i].getWeight();
	}
	return (addedweight / healthVector.size());
}

double HealthTracker::avgFP(std::vector<HealthTracker> healthVector)
{
	double addedpercent = 0;

	for (int i = 0; i < healthVector.size() - 1; i++) {
		addedpercent += healthVector[i].getFpercent();
	}
	return (addedpercent / healthVector.size());
}

std::ostream& operator<<(std::ostream& os, const HealthTracker& healthTracker) {

	os << "Weight: " << healthTracker.getWeight() << ", Fat Percent: " << healthTracker.getFpercent() << "%\n";
	return os;
}