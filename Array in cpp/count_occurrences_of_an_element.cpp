// WAP to count occurrences of an element in an array and input is given by the user.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size Of an Array: ";
    cin >> n;

    int a[n], key, count = 0;
    cout << "Enter Elements in an Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "The Array Elements Are: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << "\n Enter Element to Search: ";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            count++;
        }
    }
    cout << " The count of Occurrence Elements are: " << count;
    return 0;
}