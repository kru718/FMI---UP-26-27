#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	int currentNumber = 0;
	int sum = 0;

	for (int i = 1; i <= n; i++) {
		currentNumber = currentNumber * 10 + k;
		sum += currentNumber;
	}
	cout << sum;
	return 0;
}