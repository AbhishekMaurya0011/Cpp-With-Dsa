// WAP to print the butterfly pattern using by the function.
#include <iostream>
using namespace std;
void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << "*";

        for (int s = 1; s <= 2 * (n - i); s++)
            cout << " ";

        for (int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
            cout << "*";

        for (int s = 1; s <= 2 * (n - i); s++)
            cout << " ";

        for (int j = 1; j <= i; j++)
            cout << "*";

        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter Number of Stars: ";
    cin >> n;

    pattern(n);
    return 0;
}