#include <iostream>
#include <fstream>
using namespace std;

void conversion(double inches) {
	double meters = 0.0254;
	double convert = meters * inches;

	double* addressReader;
	addressReader = &convert;

	cout << "Meters: " << *addressReader;
}

int main() {

	int inches;
	cout << "----Inch to Meter Conversion----\n";
	cout << "Inches: ";
	cin >> inches;

	try {
		if (inches > 0) {
			conversion(inches);
		}
		else {
			throw(inches);
		}
	}
	catch(int inches) {
		cout << inches << " is an invalid value";
	}

	return 0;
}
