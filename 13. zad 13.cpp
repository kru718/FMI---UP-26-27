#include <iostream>
using namespace std;

int main()
{
	int num1, num2, num3, num4;
	cin >> num1 >> num2 >> num3 >> num4;

	cout << ((num2 == num1 + 1) && (num3 == num2 + 1) && (num4 == num3 + 1)) << endl;
	return 0;
}
