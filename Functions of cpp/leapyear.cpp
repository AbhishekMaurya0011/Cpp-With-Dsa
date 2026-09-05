// WAP to find the leap year or not using by the funtion.
#include <iostream>
using namespace std;
bool isLeapyear(int year)
{
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int main()
{
    int year;
    cout << "Enter Year:";
    cin >> year;
    if (isLeapyear(year))
        cout << "Leap Year";
    else
        cout << "Not a Leap year";
    return 0;
}