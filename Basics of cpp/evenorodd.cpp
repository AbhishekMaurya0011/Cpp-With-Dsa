// Checking For Even Or Odd Number
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number:" << endl;
    cin >> n;

    if (n % 2 == 0)
        cout << "Even Number" << endl;

    else
        cout << "Odd Number" << endl;
    return 0;
}