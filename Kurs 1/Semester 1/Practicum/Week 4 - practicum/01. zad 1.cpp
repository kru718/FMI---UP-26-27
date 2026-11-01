#include <iostream>
using namespace std;

int main()
{
    int nums;
    cin >> nums;

    int result = 0;
    for (int i = 1; i <= nums; i++) {
        int currNum;
        cin >> currNum;

        result += currNum;
    }
    cout << result;
    return 0;
}

