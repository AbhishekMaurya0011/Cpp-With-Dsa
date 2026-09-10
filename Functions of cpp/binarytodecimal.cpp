// WAP to convert  the binary number into in decimal number by using the function.
#include <iostream>
using namespace std;
int decimal(int n)
{
    int decimal = 0;
    int base = 1;

    while (n > 0)
    {
        int digit = n % 10;

        decimal = decimal + digit * base;

        base = base * 2;
        n = n / 10;
    }
    return decimal;
}

int main()
{
    int n;

    cout << "Enter binary Number:";
    cin >> n;

    cout << "Decimal Number is:" << decimal(n);
    return 0;
}