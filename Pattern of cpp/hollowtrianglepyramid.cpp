// WAP to print the hollow triangle pyramid and the number of stars is given by the user.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number Of Stars:";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1 || i == n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}