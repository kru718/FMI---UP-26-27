#include <iostream>
#include <format>
using namespace std;

int main()
{
    char char1, char2, char3;
    cin >> char1 >> char2 >> char3;

    int char1Ascii = char1;
    int char2Ascii = char2;
    int char3Ascii = char3;

    int sum = char1Ascii + char2Ascii + char3Ascii;

    cout << (sum % 2 == 0) << endl;

    return 0;
}
