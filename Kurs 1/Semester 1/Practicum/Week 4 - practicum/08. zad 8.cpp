#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int number;
	cin >> number;

	for (int i = 0; i <= number; i++) {
		if (i == 0) {
			cout << setw(number + 2) << "|" << setw(number + 2) << endl;
			continue;
		}

		cout << setw(number - i + 1);

		for (int j = 1; j <= i; j++) {
			cout << "*";
		}

		cout << " | ";

		for (int j = 1; j <= i; j++) {
			cout << "*";
		}

		cout << setw(number - i + 1);
		cout << endl;
	}
}