// print square pattern using for loop
// for n=4
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16

#include <iostream>
using namespace std;
int main()
{
    int n;
    int num = 1;
    cout << "Enter Number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    return 0;
}