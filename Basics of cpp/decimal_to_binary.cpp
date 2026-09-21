// WAP to convert Decimal number to binary number and input is given by the user.
#include <iostream>
using namespace std;
int main()
{
    int decNum;
    int ans = 0, pow = 1;
    cout << "Enter Decimal Number:";
    cin >> decNum;

    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum /= 2;

        ans += (rem * pow);
        pow *= 10;
    }
    cout << "Binary Number is:" << ans;
    return 0;
}