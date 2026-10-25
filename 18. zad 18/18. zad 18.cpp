#include <iostream>
#include <format>
using namespace std;

int main() {
	int animals, legs;
	cin >> animals >> legs;

	int cowsCount = 0;
	int chickensCount = 0;

	if (animals < 0 || legs < 0 || legs < 2 * animals || legs > 4 * animals || legs % 2 != 0) {
		cout << "Error detected. Invalid data has been entered." << endl;
		return 0;
	} else {
		cowsCount = (legs - 2 * animals) / 2;
		chickensCount = animals - cowsCount;
	}

	cout << format("There are {} cows and {} chickens.", cowsCount, chickensCount) << endl;
	return 0;
}