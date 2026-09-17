// WAP to print the x pattern and number of star is given by the user.
//  when n=5 and  any odd number
//  *   *
//   * *
//    *
//   * *
//  *   *

// when n=6 and any even number
// *    *
//  *  *
//   **
//   **
//  *  *
// *    *
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number Of stars:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j || i + j == n + 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}