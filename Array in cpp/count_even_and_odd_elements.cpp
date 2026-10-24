// WAP to find the count of even and odd elements in a array and input is given by the user.
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

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << endl;
    cout << "The Count of Even Elements are: " << even << endl;
    cout << "The Count Of Odd Elements are: " << odd << endl;
    return 0;
}