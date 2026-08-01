#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i == 25)
        {
            break;
        }
        cout << i << " ";
    }

    return 0;
}