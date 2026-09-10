// WAP to check the number is divisible or not using by the function.
#include <iostream>
using namespace std;
bool divisible(int n, int d)
{
    return n % d == 0;
}

int main()
{
    int n, d;
    cout << "Enter The Number:";
    cin >> n;

    cout << "Enter The Divisor:";
    cin >> d;

    if (divisible(n, d))
        cout << "Divisible";
    else
        cout << "Not Divisible";
    return 0;
}
