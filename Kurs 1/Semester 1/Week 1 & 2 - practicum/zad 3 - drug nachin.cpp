#include <iostream>
#include <format>
using namespace std;

int main() {
	int num1, num2;
	cin >> num1 >> num2;

	int lastDigitsNum1 = num1 % 100;
	int lastDigitsNum2 = num2 % 100;

	cout << format("{}{}", lastDigitsNum1, lastDigitsNum2) << endl;

	return 0;

}
