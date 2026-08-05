// print the reverse pyramid using the for loop
// 1234321
//  12321
//   121
//    1
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}