#include <iostream>
using namespace std;

int main() {
	int number;
	cin >> number;

	int sum = 0;
	for (int i = 1; i <= number; i++) {
		if (i < 10 && (i % 6 == 0 || i % 8 == 0)) {
			sum += i;
		}
		else if (i >= 10) {
			int lastDigit = i % 10;
			if (lastDigit == 6 || lastDigit == 8) {
				sum += i;
			}
		}
	}
	cout << sum << endl;
	return 0;
}