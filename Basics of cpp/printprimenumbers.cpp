// WAP to print the prime number from 1 to n.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number n:";
    cin >> n;

    cout << "Prime number from 1 to " << n << " are:";

    for (int num = 2; num <= n; num++)
    {
        int count = 0;
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            cout << num << "  ";
        }
    }
    return 0;
}