#include <iostream>
using namespace std;

int main() {
	int number;
	cin >> number;

	for (int i = 1; i <= number; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j << " ";
		}
		cout << endl;
	}

	number -= 1;
	for (int m = number; m >= 1; m--) {
		for (int n = 1; n <= m; n++) {
			cout << n << " ";
		}
		cout << endl;
	}
	return 0;
}
