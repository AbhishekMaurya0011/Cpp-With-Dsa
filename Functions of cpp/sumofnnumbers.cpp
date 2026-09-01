// sum of N numbers using by the functions in c++
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
    cout << "Enter The Number: ";
    cin >> n;
    cout << sumN(n) << endl;
    return 0;
}
