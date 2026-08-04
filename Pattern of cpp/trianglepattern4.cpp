// print triangle pattern using for loop
//   for n=4
//   1
//   1 2
//   1 2 3
//   1 2 3 4
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int sum = 1;
        for (int j = 1; j <= i + 1; j++)
        {
            cout << sum << " ";
            sum++;
        }
        cout << endl;
    }
    return 0;
}