#include <iostream>
using namespace std;

int main() {
	int side1, side2, side3;
	cin >> side1 >> side2 >> side3;

	bool isTriangle;
	if ((side1 = side2 + side3) && (side2 = side1 + side3) && (side3 = side2 + side1)) {
		isTriangle = 1;
		cout << boolalpha << isTriangle << endl;
	}
	else {
		isTriangle = 0;
		cout << boolalpha << isTriangle << endl;
	}
	return 0;
}