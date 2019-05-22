/**
 * CSC232 Data Structures
 * Missouri State University
 *
 * @file    XyzLanguageProcessor.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 *          Collin Tinen <vkt0516@live.missouristate.edu>
 * @brief   XyzLanguageProcessor implementation.
 */

#include "XyzLanguageProcessor.h"

bool csc232::XyzLanguageProcessor::isValid(const std::string &word) const {
	static int i = 0;

	if (word.empty() || word.length() == 1)
		return false;

	else if (word[0] != 'X')
		return false;

	else if (i <= word.length()) {
		if (word[i] == 'X' || word[i] == 'Z') {
			i++;
			isValid(word);
		}
		else if (i != (word.length() - 1) && word[i] == 'Y') {
			return false;
		}
		else
			return true;
	}
}
