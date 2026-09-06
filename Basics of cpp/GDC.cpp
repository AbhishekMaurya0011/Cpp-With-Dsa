// WAP to find the greatest common divisor in c++ and the number is input by the user.
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter Number A:";
    cin >> a;
    cout << "Enter Number B:";
    cin >> b;

    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    cout << "Greatest Common Divisor is:" << a;
    return 0;
}
