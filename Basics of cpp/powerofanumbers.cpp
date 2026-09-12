// WAP to calculate the power of a number .
#include <iostream>
using namespace std;
int main()
{
    int base, exponent;
    int result = 1;

    cout << "Enter Base Number:";
    cin >> base;

    cout << "Enter Exponent Number:";
    cin >> exponent;

    for (int i = 1; i <= exponent; i++)
    {
        result = result * base;
    }

    cout << "Power Of a Number is:" << result;
    return 0;
}