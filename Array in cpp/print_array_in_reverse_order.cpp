// WAP to print the array in reverse order and input is given by the user.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enetr Size Of a Array: ";
    cin >> n;

    int a[n];
    cout << "Enter Elements in a Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "The Array Elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "The Reverse Order Of an Array :";
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i] << " ";
    }
    return 0;
}