#include <iostream>
using namespace std;

int main()
{
	int number;
	cin >> number;

	int factorial = 1;

	for (int i = number; i >= 1; i--) {
		factorial *= i;
	}
	cout << factorial;
	return 0;
}
