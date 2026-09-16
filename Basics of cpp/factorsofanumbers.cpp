// WAP to find the factors of a number N and  input number given by the user.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number N:";
    cin >> n;

    cout << "The Factors Of N Number is:";

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}