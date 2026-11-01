#include <iostream>
using namespace std;

int main() {
	int number;
	cin >> number;

	int divisorCount = 1;

	for (int i = 2; i <= number; i++) {
		if (number % i == 0) {
			divisorCount++;
		}
	}
	cout << divisorCount << endl;
	return 0;
}