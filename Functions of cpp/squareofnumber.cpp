// WAP to find the square of any number input by the user.
#include <iostream>
using namespace std;
int square(int n)
{
    cout << "The square is:";
    return n * n;
}

int main()
{
    int n;
    cout << "Enter Number N:";
    cin >> n;
    cout << square(n);
    return 0;
}