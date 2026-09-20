// WAP to find the n terms of fibonacci seris by the using of function and the number is given  by the user.
#include <iostream>
using namespace std;
int fibonacci(int n)
{
    int a = 0, b = 1, c;
    for (int i = 0; i <= n; i++)
    {
        cout << a << " ";

        c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    int n;
    cout << "Enter Number Of Terms Want to Print:";
    cin >> n;
    cout << "The Fibonacci term is:";

    fibonacci(n);
    return 0;
}