#include <iostream>
using namespace std;

int main() {
	int nums;
	cin >> nums;

	int maxNum = 0;
	for (int i = 1; i <= nums; i++) {
		int currNum;
		cin >> currNum;

		if (currNum > maxNum) {
			maxNum = currNum;
		}
	}
	cout << maxNum;
	return 0;
}
