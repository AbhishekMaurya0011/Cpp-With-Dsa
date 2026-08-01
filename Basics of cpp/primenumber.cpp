// Check the number is prime or non prime number

#include <iostream>
using namespace std;
int main()
{
    int n;
    bool isprime = true;
    cout << "Enter Number: " << endl;
    cin >> n;
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            isprime = false;
            break;
        }
    }
    if (isprime == true)
    {
        cout << "prime Number" << endl;
    }
    else
    {
        cout << "Non Prime Number" << endl;
    }
    return 0;
}