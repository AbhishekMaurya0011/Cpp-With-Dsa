// WAP to figure out how to find if a number is power of 2 without any loop.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number Which You Want to Check the power Of 2:";
    cin >> n;

    if (n > 0 && (n & (n - 1)) == 0)
    {
        cout << n << " is Power of 2";
    }
    else
    {
        cout << n << " is Not a power Of 2";
    }
    return 0;
}