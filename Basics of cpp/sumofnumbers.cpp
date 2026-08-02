// Sum of n number by using for loop

#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "Enter number" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum is:" << sum << endl;

    return 0;
}