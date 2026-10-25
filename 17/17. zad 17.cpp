#include <iostream>
using namespace std;

int main()
{
	double num1, num2;
	char operation;
	cin >> num1 >> operation >> num2;

	double result;

	if (num2 != 0) {
		switch (operation) {
		case '+':
			result = num1 + num2;
			cout << result << endl;
			break;
		case '-':
			result = num1 - num2;
			cout << result << endl;
			break;
		case '*':
			result = num1 * num2;
			cout << result << endl;
			break;
		case '/':
			result = num1 / num2;
			cout << result << endl;
			break;
		}
	}
	else if (num2 == 0){
		cout << "Error! You can't divide by 0!" << endl;
	}
	return 0;
}
