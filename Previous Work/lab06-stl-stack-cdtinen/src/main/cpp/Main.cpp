/**
 * CSC232 Data Structures
 * Missouri State University
 *
 * @file    Main.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 *          Collin Tinen <vkt0516@live.missouristate.edu>
 * @brief   Entry point for hw03 target.
 */

#include <cstdlib>
#include <iostream>
#include <stack>

bool isBalanced(string s)
{
	std::stack<char> x;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '{')
		{
			x.push(s[i]);
		}


		if (s[i] == '}')
		{
			if (x.empty()) {
				return false;
			}

			char c = x.top();
			x.pop();

			if (c == '{' && s[i] != '}')
				return false;
		}

	}
	return x.empty();
}

void Reverse(char *s) {
	std::stack<char> charStack;

	for (int i = 0; i < strlen(s); i++)
		charStack.push(s[i]);

	for (int i = 0; i < strlen(s); i++)
	{
		s[i] = charStack.top();
		charStack.pop();
	}
}

int main() {

	std::string course{ "CSC232 - Data Structures" };

	char string[] = "CSC232 - Data Structures";
	Reverse(string);

	printf(" %s \n",string);


	std::string braces{ "{abc{de}{fg}hij}kl" };

	if (isBalanced(braces))
		cout << "true";
	else
		cout << "false";

	return EXIT_SUCCESS;
}
