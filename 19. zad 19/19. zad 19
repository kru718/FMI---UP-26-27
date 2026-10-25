#include <iostream>
using namespace std;

int main()
{
    char startingChar, endingChar, symbol;
    int step;
    cin >> startingChar >> endingChar >> symbol >> step;

    int startingNum = startingChar;
    int endingNum = endingChar;
    int symbolNum = symbol;

    int newSymbol = symbolNum + step;
    int length = endingNum - startingNum + 1;


    if (newSymbol < startingNum){
        newSymbol += length;
    }
    else if (newSymbol > endingNum){
        newSymbol -= length;
    }

    cout << char(newSymbol) << endl;
}
