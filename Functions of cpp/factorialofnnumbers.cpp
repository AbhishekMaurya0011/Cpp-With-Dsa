// Factorial of N numbers using by the functions
#include <iostream>
using namespace std;
int factN(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    cout << factN(n) << endl;
    return 0;
}