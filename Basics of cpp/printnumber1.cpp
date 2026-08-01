// print the number by using for loop
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number:" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    return 0;
}