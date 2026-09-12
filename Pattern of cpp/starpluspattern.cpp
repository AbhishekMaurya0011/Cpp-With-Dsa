// WAP to print the star plus pattern by using the function.
#include <iostream>
using namespace std;
void pattern(int n)
{
    int mid = n / 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == mid || j == mid)
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