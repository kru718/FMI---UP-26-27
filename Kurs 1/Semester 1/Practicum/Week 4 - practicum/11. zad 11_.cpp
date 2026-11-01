#include <iostream>
using namespace std;

int main() {
	int number;
	cin >> number;

	for (int i = 2; i <= number; i++) {

		int tempI = i;
		int sum = 0;
		while (tempI != 0) {
			sum += tempI % 10;
			tempI /= 10;
		}

		if (sum % 2 == 0) {
			if (i != number) {
				cout << i << " ";
			}
			else {
				cout << i << endl;
			}
		}
	}
	return 0;
}