#include <iostream>
using namespace std;

int const SIZE = 60;

bool isMonotonicallyDecreasing(int arr[], int n) {
	for (int i = 0; i < (n - 1); i++) {
		if (arr[i] < arr[i + 1]) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int n;
	cin >> n;

	int arr[SIZE];

	if (n < 1 || n > 50) {
		cout << "Invalid input" << endl;
		return 0;
	}

	int input;
	for (int i = 0; i < n; i++) {
		cin >> input;
		arr[i] = input;
	}

	bool result = isMonotonicallyDecreasing(arr, n);
	if (result) {
		cout << "The series is monotonically decreasing." << endl;
	}
	else {
		cout << "The series is not monotonically decreasing." << endl;
	}

}
