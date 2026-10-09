// WAP to calculate the sum of array elements and input is given by the user.
#include <iostream>
using namespace std;
int main()
{
    int a[5], n, sum = 0;
    cout << "Enter 5 Elements in an Array: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << "The Elements are: :";
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "The Sum Of Elements is: " << sum;

    return 0;
}
