// print inverted triangle pattern using for loop
// for n=4
// AAAA
//  BBB
//   CC
//    D
#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "Enter Number:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < n - i; j++)
        {
            cout << char('A' + i);
        }
        cout << endl;
    }
    return 0;
}