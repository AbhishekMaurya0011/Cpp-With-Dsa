// multiply of two number which is given the value of A and B by the user
#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int mul = 0;
    cout << "Enter Number A: ";
    cin >> a;

    cout << "Enter Number B: ";
    cin >> b;

    mul = a * b;
    cout << "Multiply of A and B is: " << mul << endl;
    return 0;
}