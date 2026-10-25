#include <iostream>
#include <format>
using namespace std;

int main()
{
    long long seconds;
    cin >> seconds;

    long long secondsADay = 60 * 60 * 24;
    long long days = seconds / secondsADay;
    seconds %= secondsADay;

    long long hours = seconds / 3600;
    seconds %= 3600;

    long long minutes = seconds / 60;
    seconds %= 60;

    long long secondsFinal = seconds % 60;

    cout << format("{} days, {} hours, {} minutes and {} seconds", days, hours, minutes, seconds);

    return 0;
}