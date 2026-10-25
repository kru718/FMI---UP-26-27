#include <iostream>
using namespace std;

int main()
{
	int day;
	cin >> day;

	if (day <= 7) {
		switch (day) {
			case 1:
				cout << "Monday" << endl;
				break;
			case 2:
				cout << "Tuesday" << endl;
				break;
			case 3:
				cout << "Wednesday" << endl;
				break;
			case 4:
				cout << "Thursday" << endl;
				break;
			case 5:
				cout << "Friday" << endl;
				break;
			case 6:
				cout << "Saturday" << endl;
				break;
			case 7:
				cout << "Sunday" << endl;
				break;
		}
	}
	else {
		int currentDay = day % 7;

		switch (currentDay) {
		case 0: cout << "Sunday"; break;
		case 1: cout << "Monday"; break;
		case 2: cout << "Tuesday"; break;
		case 3: cout << "Wednesday"; break;
		case 4: cout << "Thursday"; break;
		case 5: cout << "Friday"; break;
		case 6: cout << "Saturday"; break;
		}
	}
	return 0;
}