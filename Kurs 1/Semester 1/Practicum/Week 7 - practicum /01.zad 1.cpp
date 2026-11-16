#include <iostream>
using namespace std;

int myAbs(int a) {
	return (a < 0 ? -a : a);
}

int findMinMax(const int arr[], int size, int& minValue, int& maxValue) {
	int sum = 0;
	int minDifference = 1e9;

	for (int i = 0; i < size; i++) {
		if (arr[i] < minValue) {
			minValue = arr[i];
		}
		else if (arr[i] > maxValue) {
			maxValue = arr[i];
		}

		sum += arr[i];
	}

	int averageValue = sum / size;
	int closestToAvrg = 0;
	
	for (int i = 0; i < size; i++) {
		int currDifference = myAbs(averageValue - arr[i]);

		if (minDifference > currDifference) {
			minDifference = currDifference;
			closestToAvrg = arr[i];
		}
	}

	return closestToAvrg;
}

int main() {
	int minValue = 1e9;
	int maxValue = 1e-9;
	int size = 5;
	int arr[5] = {};

	int input;
	for (int i = 0; i < 5; i++) {
		cin >> input;
		arr[i] = input;
	}

	findMinMax(arr, size, minValue, maxValue);
	int result = findMinMax(arr, size, minValue, maxValue);

	cout << "Min: " << minValue << endl;
	cout << "Max: " << maxValue << endl;
	cout << "Closest to average: " << result << endl;
}
