//#include "stack_array.h"
#include <stack>
#include <iostream>
#include <string>
using namespace std;

int main () {
	stack<string> stk; // A stack for testing
	int n = 0; // Count of test values pushed to stack
	string s; // A string value, input

	// Enter some strings for testing
	cout << "Enter string: ";
	getline(cin, s);
	while (s.size()) {
		// Push string to stack
		stk.push(s);
		cout << "Size: " << stk.size() << ", Top: " << stk.top() << endl;
		if (!(++n % 5)) {
			// After every 5 pushes, we'll pop twice
			cout << "Pop: " << stk.top() << endl;
			stk.pop();
			cout << "Pop: " << stk.top() << endl;
			stk.pop();
			cout << "Size: " << stk.size() << ", Top: " << stk.top() << endl;
		}
		cout << endl << "Enter string: ";
		getline(cin, s);
	}

	// Pop stack until it's empty
	while (!stk.empty()) {
		cout << "Size: " << stk.size() << ", Top: " << stk.top() << endl;
		stk.pop();
	}

	return 0;
}
