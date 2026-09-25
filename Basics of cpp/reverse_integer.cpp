// WAP to reverse an integer n and input is given by the user.
#include <iostream>
using namespace std;
int main()
{
    int n;
    int rev = 0;
    cout << "Enter Number Which You Want to Reverse Number:";
    cin >> n;

    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    cout << "The Reverse number is:" << rev;
    return 0;
}