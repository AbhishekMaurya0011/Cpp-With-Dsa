// WAP to print the fibonacci series the number is input by the user.
#include <iostream>
using namespace std;
int main()
{
    int n, a = 0, b = 1;
    cout << "Enter The Number:";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << a << " ";

        int c = a + b;
        a = b;
        b = c;
    }
    return 0;
}