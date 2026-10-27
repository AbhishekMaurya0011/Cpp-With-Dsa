// WAP to count positive and negative elements in an array and input is given by user.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Size Of Array: ";
    cin >> n;

    int a[n], pos = 0, neg = 0;
    cout << "Enter Elements in an Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] >= 0)
            pos++;
        else if (a[i] < 0)
            neg++;
    }

    cout << "The Array Elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n The Count Of Positive Elements are: " << pos;
    cout << "\n The Count Of Negative Elements are: " << neg;
    return 0;
}