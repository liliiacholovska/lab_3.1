#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double x;
	double y;
	double a;
	double b;

	cout << "x = "; cin >> x;
	a = 1 / x + 4;

	//Спосіб 1 
	if (x <= 1) {
		b = 8 + 0.65 * x;
	}
	if (x <= 5 && x > 1) {
		b = log(x) + 1.0 / tan((6.1 + x) / 2);
	}
	if (x > 5) {
		b = sqrt(x + sqrt(2));
	}
	
	y = a - b;
	cout << endl;
	cout << "1) y = " << y << endl;

	//Спосіб 2
	if (x <= 1) {
		b = 8 + 0.65 * x;
	}
	else if (x > 5) {
		b = sqrt(x + sqrt(2)); 
	}
	else {
		b = log(x) + 1.0 / tan((6.1 + x) / 2);
	}

	y = a - b;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}