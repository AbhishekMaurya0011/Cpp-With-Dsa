// multiply of two number using by the functions
#include <iostream>
using namespace std;
int multiplyN(int a, int b)
{
    return a * b;
}
int main()
{
    int a;
    int b;
    cout << "Enter Number A: ";
    cin >> a;
    cout << "Enter Number B: ";
    cin >> b;
    cout << "Multiplication is:" << multiplyN(a, b);
    return 0;
}