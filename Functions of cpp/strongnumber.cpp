// WAP to find the strong number by using the function and input is given by the user.

#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

bool strongNumber(int n)
{
    int original = n;
    int sum = 0;

    while (n > 0)
    {
        int digit = n % 10;
        sum = sum + factorial(digit);
        n = n / 10;
    }
    return sum == original;
}

int main()
{
    int n;
    cout << "Enter Number N:";
    cin >> n;

    if (strongNumber(n))
        cout << "N is a Strong number";
    else
        cout << "N is Not a Strong Number";
    return 0;
}