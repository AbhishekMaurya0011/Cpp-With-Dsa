// WAP to find the composite number and number is given by the user
#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "Enter Number N:";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }

    if (count > 2)
        cout << "N is a Composite Number";
    else
        cout << "N is Not a Composite Number";
    return 0;
}