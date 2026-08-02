// Sum of number from 1 to n which are divisible by 4 using While loop
#include <iostream>
using namespace std;
int main()
{
    int n;
    int count = 1;
    int sum = 0;
    cout << "Enter Number: " << endl;
    cin >> n;
    while (count <= n)
    {
        if (count % 4 == 0)
        {
            sum += count;
        }
        count++;
    }
    cout << "Sum is: " << sum << endl;
    return 0;
}