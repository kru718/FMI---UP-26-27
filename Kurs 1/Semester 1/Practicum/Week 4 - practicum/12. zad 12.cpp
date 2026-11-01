#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int number;
	cin >> number;

	for (int i = 1; i <= number; i++) {
		for (int j = i; j <= number; j++) {
			if (j != 1) {
				cout << j << " ";
			}
			else {
				cout << j << endl;
			}
		}
	}
	return 0;
}