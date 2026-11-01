#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	cin >> num1 >> num2;

	int sum = num1 + num2;
	int difference = num1 - num2;
	int product = num1 * num2;
	int remainder = num1 / num2;

	if ((sum > difference) && (sum > product) && (sum > remainder)) {
		cout << sum;
	} else if ((difference > sum) && (difference > product) && (difference > remainder)) {
		cout << difference;
	}
	else if ((product > sum) && (product > sum) && (product > remainder)) {
		cout << product;
	}
	else if ((remainder > sum) && (remainder > difference) && (remainder > product)) {
		cout << remainder;
	}

	return 0;
}