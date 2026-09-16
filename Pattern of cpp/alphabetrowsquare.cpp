// WAP to print Alphabet Row Square .
// AAAA
// BBBB
// CCCC
// DDDD
#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cout << char('A' + i - 1);
        cout << endl;
    }
}