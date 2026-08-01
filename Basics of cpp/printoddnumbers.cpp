// print the odd number by using for loop
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number: " << endl;
    cin >> n;
    cout << "Odd Numbers:";
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {

            cout << i << " ";
        }
    }
    return 0;
}