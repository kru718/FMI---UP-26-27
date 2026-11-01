#include <iostream>
using namespace std;

int main() {
	int number;
	cin >> number;

	for (int i = 2; i <= number; i++) {
		
		int tempI = i;
		int currNumLgth = 0;
		while (tempI != 0) {
			tempI /= 10;
			currNumLgth++;
		}

		int sum = 0;
		int tempI1 = i;
		while (tempI1 != 0) {
			sum += tempI1 % 10;
			tempI1 /= 10;
		}

		if (sum % 2 == 0) {
			if (i != number) {
				cout << i << " ";
			}
			else {
				cout << i;
			}
		}
	}
	return 0;
}