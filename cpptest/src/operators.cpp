#include "std_lib_facilities.h"

int operators () {

	string dummy;
	if (cin.fail()) {
		cin.clear();
		cin >> dummy;
	} else cin.ignore(10000,'\n');

	cout << "Podaj liczb� zmiennoprzecinkow�: ";
	double n;
	cin >> n;
	cout << "n == " << n
			<< "\nn+1 ==" << n + 1
			<< "\nTrzy razy n ==" << 3 * n
			<< "\nPierwiastek ==" << sqrt(n)
			<< endl;

	return 0;
}
