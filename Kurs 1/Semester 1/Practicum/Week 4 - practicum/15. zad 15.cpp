#include <iostream>
using namespace std;

int main() {
	int number;
	cin >> number;

	for (int i = 1; i <= number; i++) {
		for (int j = 1; j <= number; j++) {
			if (i == j) {
				cout << j;
			}
			else if (i < j) {
				cout << ".";
			}
			else {
				cout << "*";
			}
		}
		cout << endl;
	}
}
