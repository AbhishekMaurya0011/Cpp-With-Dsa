// WAP to swap the two number with using of 3rd variable.
#include <iostream>
using namespace std;
int main()
{
    int a, b, temp;
    cout << "Enter Number A:";
    cin >> a;
    cout << "Enter Number B:";
    cin >> b;

    temp = a;
    a = b;
    b = temp;
    cout << "A= " << a << endl;
    cout << "B= " << b << endl;
    return 0;
}