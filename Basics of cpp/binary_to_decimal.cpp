// WAP to convert the binary number into the decimal number and input is given by the user.
#include <iostream>
using namespace std;
int main()
{
    int binNum;
    int ans = 0, pow = 1;
    cout << "Enter Binary Number: ";
    cin >> binNum;

    while (binNum > 0)
    {
        int rem = binNum % 10;
        ans += rem * pow;

        binNum /= 10;
        pow *= 2;
    }
    cout << "The Decimal Number is: " << ans;
    return 0;
}