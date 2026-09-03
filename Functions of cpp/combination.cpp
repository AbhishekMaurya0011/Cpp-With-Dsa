// WAP to solve the problem of combination by using the functions and the value of n and r is input by the user
#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    return fact;
}

int nCr(int n, int r)
{
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n - r);
    return fact_n / (fact_r * fact_nmr);
}

int main()
{
    int n, r;
    cout << "Enter Number n:";
    cin >> n;

    cout << "Enter Number r:";
    cin >> r;

    if (r <= n && n >= 0 && r >= 0)
    {
        cout << "The Value Of nCr is: " << nCr(n, r);
    }
    else
    {
        cout << "Ivalid Input!";
    }
    return 0;
}