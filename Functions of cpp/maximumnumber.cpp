// check the two number which is greater number.
#include <iostream>
using namespace std;
int maximum(int a, int b)
{
    if (a > b)
    {
        cout << "A is The Greater Number:";
        return a;
    }
    else
    {
        cout << "B is The Greater Number:";
        return b;
    }
}

int main()
{
    int a, b;
    cout << "Enter Number A:";
    cin >> a;

    cout << "Enter Number B:";
    cin >> b;

    cout << maximum(a, b);
    return 0;
}