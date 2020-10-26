#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	ant:
	long double x, y;
	string z;
	cout << "AT-Calc Version 1.0.0\nWrite first number.\n";
	cin >> x;
	cout << "Write second number.\n";
	cin >> y;
	cout << "Write which operation of those numbers you want to be performed\n(note that for mathematical operations which do not follow commutative law take it first to second number)\nor type IDK.\n";
	cin >> z;
	if (z == "IDK") {
		int r;
		cout << "Addition\nSubtraction\nMultiplication\nDivision\nModulus\nHypotenuse\nPower\nRoot\nLogarithm\nEnter one to reenter.\n";
		cin >> r;
		if (r == 1) {
			goto ant;
		}
		else {
			cat:
			int g;
			cout << "Wrong Input!!!\nEnter 1 to reenter.\n";
			cin >> g;
			if (g == 1) {
				goto ant;
			}
			else {
				cout << "Wrong input again!!!\n";
				goto cat;
			}
		}
	}
	else if (z == "Addition") {
		cout << x + y;
	}
	else if (z == "Subtraction") {
		cout << x - y;
	}
	else if (z == "Multiplication") {
		cout << x * y;
	}
	else if (z == "Division") {
		cout << x / y;
	}
	else if (z == "Hypotenuse") {
		cout << hypot(x, y);
	}
	else if (z == "Power") {
		cout << pow(x, y);
	}
	else if (z == "Root") {
		long double q;
		q = 1 / y;
		cout << pow(x, q);
	}
	else if (z == "Logarithm") {
		cout << log(y) / log(x);
	}
	else {
		dog:
		int s;
		cout << "Wrong Input!!!\nEnter 1 to reenter.\n";
		cin >> s;
		if (s == 1) {
			goto ant;
		}
		else {
			cout << "Wrong input again!!!\n";
			goto dog;
		}
	}
	return 0;
}
