// WAP to print the star border pattern using by the function.
#include <iostream>
using namespace std;
void pattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter Number Of Stars:";
    cin >> n;

    pattern(n);
    return 0;
}