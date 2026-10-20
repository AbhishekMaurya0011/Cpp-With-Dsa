// WAP to input the array and print the elements of array and input is given by the user.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size of Array: ";
    cin >> n;

    int a[n];
    cout << "Enter Elements in a Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Array Elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}