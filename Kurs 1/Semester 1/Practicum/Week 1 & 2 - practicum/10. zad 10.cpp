#include <iostream>
#include <format>
#include <iomanip>
using namespace std;

int main()
{
	int number;
	cin >> number;

	int digit1 = number / 1000;
	int digit2 = (number / 100) % 10;
	int digit3 = (number / 10) % 10;
	int digit4 = number % 10;

	int sum = digit1 + digit2 + digit3 + digit4;
	int product = digit1 * digit2 * digit3 * digit4;
	double average = sum / 4.0;

	cout << format("Sum: {}", sum) << endl;
	cout << format("Product: {}", product) << endl;
	cout << format("Average: {}", average) << endl;

	return 0;
}
