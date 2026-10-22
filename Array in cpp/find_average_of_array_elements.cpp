// WAP to find average of array elements and input is given by the user.
#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "Enter Size Of a Array: ";
    cin >> n;

    int a[n];
    cout << "Enter Elements in a Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << "Array Elements are:";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " " << endl;
        sum += a[i];
    }
    cout << "The Average Of Array Elemenets is: " << sum / n;
    return 0;
}