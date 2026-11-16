#include <iostream>
using namespace std;

const int SIZE = 60;

double averageValueArray(int arr[], int n) {
	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}

	double averageValue = sum / double(n);
	return averageValue;
}

int main() {
	int n;
	cin >> n;
	
	int arr[SIZE] = {};

	if (n < 1 || n > 50) {
		cout << "Invalid input" << endl;
		return 0;
	}

	int input;
	for (int i = 0; i < n; i++) {
		cin >> input;
		arr[i] = input;
	}

	cout << "Average value: " << averageValueArray(arr, n) << endl;
}
