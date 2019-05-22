/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Spring 2019
 *
 * @file    Palindrominator.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 * // 		Collin Tinen <vkt0516@live.missouristate.edu>
 */

#include <queue>
#include <stack>   // Provides access to std::stack<T> where T is the template parameter, e.g., char
#include <sstream> // Provides access to std::stringstream which may be useful in the reverse helper operation
#include "Palindrominator.h"

Palindrominator::Palindrominator(bool append) : append_{append} {
    /* no-op */
}

bool Palindrominator::isPalindrome(const std::string &text) const {
	std::queue<char> q;
	std::stack<char> s;
	
	for(int i=0; i < text.size(); i++) {
		q.push(text[i]);
		s.push(text[i]);
	}
	
	while ((!q.empty()) && (!s.empty())) {
		if (s.top() != q.front()) {
			return false;
		}
		else {
			q.pop();
			s.pop();
		}
	}
	
    return true;
}

std::string Palindrominator::makePalindrome(const std::string &text) const {
	std::stringstream beg;
	std::stringstream end;
	std::string instring;
	std::string outstring;
	instring = text;
	beg << (instring[0]);
	end << (instring[instring.size() - 1]);
	int first = 0;
	int last = (instring.size() - 1);
	while((instring[first] != instring[last]) && (instring[first] != instring[--last])) {
		beg.swap(end);
		++first;
		beg << (instring[first]);
		end << (instring[last]);
	}
	
	beg << end.str();
	outstring = beg.str();
	
	if (append_ == true) {
		outstring = instring + outstring;
	}
	else if (append_ == false) {
		outstring = outstring + instring;
	}

    return outstring;
}
