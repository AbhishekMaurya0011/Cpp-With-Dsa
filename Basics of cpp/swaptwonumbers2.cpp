// WAP to swapping the two number without using three variable which is input by thw user.
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter Number A:";
    cin >> a;
    cout << "Enter Number B:";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After Swapping:" << endl;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;
}