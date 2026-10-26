#include <iostream>
using namespace std;

int main()
{
    int positiveCount = 0;
    int positiveSum = 0;

    while (positiveCount != 5) {
        int currNum;
        cin >> currNum;

        if (currNum > 0) {
            positiveSum += currNum;
            positiveCount++;
        }
    }
    cout << positiveSum;
}