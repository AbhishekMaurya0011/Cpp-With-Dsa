// WAP to find the LCM of three number using by the function  and input is givien by the user.
#include <iostream>
using namespace std;
int lcm(int a, int b, int c)
{
    int max;

    if (a > b && a > c)
        max = a;
    else if (b > c)
        max = b;
    else
        max = c;

    while (true)
    {
        if (max % a == 0 && max % b == 0 && max % c == 0)
            return max;
        max++;
    }
}

int main()
{
    int a, b, c;

    cout << "Enter First Number:";
    cin >> a;

    cout << "Enter Second Number:";
    cin >> b;

    cout << "Enter Third Number:";
    cin >> c;

    cout << "LCM is:" << lcm(a, b, c);
    return 0;
}