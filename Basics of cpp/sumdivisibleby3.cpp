// Sum of number from 1 to n which are divisible by 3 using for loop
#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "Enter Number: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            sum += i;
        }
    }
    cout << "Sum is:" << sum << endl;
    return 0;
}