#include <iostream>
using namespace std;

int main()
{
	long long cardId;
	cin >> cardId;

	long lastDigits = cardId % 10000;

	cout << "XXXXXXXXXXXX" << lastDigits << endl;
	return 0;
}

