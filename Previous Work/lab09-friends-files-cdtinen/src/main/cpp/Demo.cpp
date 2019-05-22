/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Spring 2019
 *
 * @file      Demo.cpp
 * @authors   Jim Daehn <jdaehn@missouristate.edu>
 */

#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "HealthTracker.h"


int main(int argc, char* argv[]) {
    std::cout << "Hello, Demo!" << std::endl;

	std::vector<HealthTracker> hVector;
	double testW;
	double testFP;
	testW = 255.77;
	testFP = 26.5;

	HealthTracker tracker(testW, testFP);
	HealthTracker tracker2(160.45, 10.4);
	hVector.push_back(tracker);
	hVector.push_back(tracker2);

	std::ofstream data{ "test.dat" };
	if (!data) {
		std::cerr << "Error opening input.dat..." << std::endl;
		return EXIT_FAILURE;
	}

	data << tracker;
	data << tracker2;
	data.close();

	std::string line;
	std::ifstream output{ "test.dat" };
	while (getline(output, line)) {
		std::cout << line << "\n";
	}
	output.close();

	std::cout << "Average Fat Percentage: " << tracker2.avgFP(hVector) << "%\n";
	std::cout << "Average Weight: " << tracker.avgW(hVector) << "\n";

    return EXIT_SUCCESS;
}