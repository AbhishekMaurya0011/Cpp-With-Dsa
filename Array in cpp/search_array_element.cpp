// WAP to search a element in a array and input is given by the user.
#include <iostream>
using namespace std;
int main()
{
    int n, key;
    bool found = false;
    int count;

    cout << "Enter Size Of an Array: ";
    cin >> n;
    int a[n];
    cout << "Enter Elements in an Array and Element Should be Equal to Array Size : ";
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

    cout << "Enter Element to Search: ";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            cout << "The Element Found at Index: " << i << endl;
            cout << "The ELement Found Value is: " << a[i] << endl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << "The Element is Not Found";
    }
    return 0;
}