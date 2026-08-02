// Sum of Even Numbers by using for loop
#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "Enter Number:" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    cout << "Sum is:" << sum << endl;
    return 0;
}