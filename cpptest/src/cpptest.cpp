//============================================================================
// Name        : cpptest.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "std_lib_facilities.h"
#include <complex>
#include "operators.h"

using namespace std;

int main() {
	cout << "!!!Hello Brave World!!!" << endl; // prints !!!Hello World!!!
	double a,b;
	char type;
	while (cin) {

		cout << "a: ";
		cin >> a;
		cout << "b: ";
		cin >> b;
		complex<double> c (a,b);
		cout << "c = " << c << "\nContinue [y/n]?";
		cin >> type;
		if (type != 'y') break;
	}

	operators();
	return 0;
}
