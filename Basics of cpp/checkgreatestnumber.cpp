// check the greatest number using the conditional statement
#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cout << "Enter Number A: ";
    cin >> a;

    cout << "Enter Number B: ";
    cin >> b;

    cout << "Enter Number C: ";
    cin >> c;
    if (a > b && a > c)
        cout << "A is Greater Number" << endl;
    else if (b > a && b > c)
        cout << "B is Greater Number" << endl;
    else
        cout << "C is Greater Number" << endl;

    return 0;
}