#include <iostream>
#include <cmath>
using namespace std;

#define EPS 0.0000001

int main() {
	double number = 0;
	cin >> number;


	int number1 = number;
	double difference = (number > number1) ? number - number1 : number1 - number;

	if (difference < EPS) {
		if (number1 % 2 == 0) {
			cout << "Even integer" << endl;
		}
		else {
			cout << "Odd integer" << endl;
		}
	}
	else {
		if (number > 0) {
			cout << "Positive rational" << endl;
		}
		else {
			cout << "Negative rational" << endl;
		}
	}
	return 0;
}