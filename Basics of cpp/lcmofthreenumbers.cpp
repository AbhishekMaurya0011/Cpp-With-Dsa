// WAP to find the LCM of three number and the number is input by the user.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, max;
    cout << "Enter First Number: ";
    cin >> a;

    cout << "Enter Second Number: ";
    cin >> b;

    cout << "Enter Third Number: ";
    cin >> c;

    if (a > b & a > c)
        max = a;
    else if (b > c)
        max = b;

    else
        max = c;

    while (true)
    {
        if (max % a == 0 && max % b == 0 && max % c == 0)
        {
            cout << "LCM is:" << max;
            break;
        }

        max++;
    }
    return 0;
}