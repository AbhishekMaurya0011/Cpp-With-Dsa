#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size of a Array: ";
    cin >> n;
    int a[n], even = 0, odd = 0;
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
    return 0;
}