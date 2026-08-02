// Sum of Even Numbers by using while loop
#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    int count = 1;
    cout << "Enter Number:" << endl;
    cin >> n;
    while (count <= n)
    {
        if (count % 2 == 0)
        {
            sum += count;
        }
        count++;
    }
    cout << "Sum is:" << sum << endl;

    return 0;
}