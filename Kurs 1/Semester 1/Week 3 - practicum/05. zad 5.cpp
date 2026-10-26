#include <iostream>
using namespace std;

int main() {
	int number;
	cin >> number;

	int digit1 = number / 100;
	int digit2 = (number / 10) % 10;
	int digit3 = number % 10;
	
	bool isEqual;
	if ((digit1 == digit2) || (digit1 == digit3) || (digit2 == digit3)) {
		isEqual = true;
		cout << isEqual << endl;
	}
	else {
		isEqual = false;
		cout << isEqual << endl;
	}
}