// WAP to print the prime number from 1 to n by using the funtion.
#include <iostream>
using namespace std;
bool isPrime(int num)
{
    if (num < 2)
        return false;

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cout << "Enter Number n:";
    cin >> n;
    for (int i = 1; i <= n; i++)

    {
        if (isPrime(i))

            cout << i << "  ";
    }
    cout << ":This are the all Prime Number ";
    return 0;
}
