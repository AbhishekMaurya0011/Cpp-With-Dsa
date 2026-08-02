// Sum of n number by using while loop
#include <iostream>
using namespace std;
int main()
{
    int n;
    int count = 1;
    int sum = 0;
    cout << "Enter Number:" << endl;
    cin >> n;
    while (count <= n)
    {
        sum += count;
        count++;
    }
    cout << "Sum is:" << sum << endl;
    return 0;
}