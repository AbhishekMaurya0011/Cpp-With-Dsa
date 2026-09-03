// WAP find the sum of 1 to n by using the function and n is input by the user
#include <iostream>
using namespace std;
int sumN(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter Number n:";
    cin >> n;
    cout << "Sum of Number n is:" << sumN(n);
    return 0;
}