#include "std_lib_facilities.h"

int operators () {

	string dummy;
	if (cin.fail()) {
		cin.clear();
		cin >> dummy;
	} else cin.ignore(10000,'\n');

	cout << "Podaj liczbê zmiennoprzecinkow¹: ";
	double n;
	cin >> n;
	cout << "n == " << n
			<< "\nn+1 ==" << n + 1
			<< "\nTrzy razy n ==" << 3 * n
			<< "\nPierwiastek ==" << sqrt(n)
			<< endl;

	return 0;
}

int testvector() {
	vector<int> v;
	int i = 0;

	v.push_back(4);
	v.push_back(2);
	v.push_back(6);
	v.push_back(1);

	cout << "Vector size: " << v.size() << endl;
	cout << "Not sorted" << endl;
	for (i=0; i < v.size(); i++)
		cout << "row " << i << ": " << v[i] << endl;

	sort(v.begin(), v.end());
	cout << "Sorted" << endl;
	for (i=0; i < v.size(); i++)
		cout << "row " << i << ": " << v[i] << endl;
	return 0;
}
