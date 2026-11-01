#include <iostream>
using namespace std;

int main() {
	int number;
	cin >> number;

	int fibonacciFirst = 1;
	int fibonacciSecond = 1;

	int nextNumber = 0;
	
	for (int i = 3; i < number; i++) {
		nextNumber = fibonacciFirst + fibonacciSecond;
		fibonacciFirst = fibonacciSecond;
		fibonacciSecond = nextNumber;
	}
	cout << nextNumber << endl;
	return 0;
}