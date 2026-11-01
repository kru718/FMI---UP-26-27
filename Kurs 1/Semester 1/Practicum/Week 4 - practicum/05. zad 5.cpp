#include <iostream>
using namespace std;

int main() {

	int negativeCount = 0;
	int minNumber = 0;

	while (negativeCount != 3) {
		int currentNumber;
		cin >> currentNumber;

		if (currentNumber > 0) {
			negativeCount = 0;
		}
		else if (currentNumber < 0) {
			negativeCount++;
			if (negativeCount == 1 || currentNumber < minNumber) {
				minNumber = currentNumber;
			}
		}
	}
	cout << minNumber;
	return 0;
}