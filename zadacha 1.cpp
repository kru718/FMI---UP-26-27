#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;


	int divisorCount = 0;
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			divisorCount++;
		}
	}

	cout << (divisorCount == 2);
	return 0;
}