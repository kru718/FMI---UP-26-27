#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int number;
	char symbol;

	cin >> number >> symbol;

	for (int i = 1; i <= number*2; i+=2) {
		cout << setw((number * 2 - i) / 2 + 1);

		for (int j = 1; j <= i; j++) {
			cout << symbol;
		}
		cout << setw((number * 2 - i) / 2 + 1);
		cout << endl;
	}

	for (int i = (number * 2 - 3); i >= 1; i -= 2) {
		cout << setw((number * 2 - i) / 2 + 1);

		for (int j = 1; j <= i; j++) {
			cout << symbol;
		}
		cout << setw((number * 2 - i) / 2 + 1);
		cout << endl;
	}
}
