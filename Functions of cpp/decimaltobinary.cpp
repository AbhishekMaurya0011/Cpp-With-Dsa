// WAP to convert the decimal number into the binary number by using the function.
#include <iostream>
using namespace std;
void binary(int n)
{
    int binary[32], i = 0;

    while (n > 0)
    {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }
    for (i = i - 1; i >= 0; i--)
        cout << binary[i];
}

int main()
{
    int n;
    cout << "Enter Decimal Number:";
    cin >> n;

    cout << "The Binary Number is:";
    binary(n);

    return 0;
}
