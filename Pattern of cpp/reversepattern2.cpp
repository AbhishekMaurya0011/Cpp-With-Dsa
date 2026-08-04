// print reverse pattern using for loop
// A
// B A
// C B A
// D C B A

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j >= 0; j--)
        {

            cout << char('A' + j) << " ";
        }
        cout << endl;
    }
    return 0;
}