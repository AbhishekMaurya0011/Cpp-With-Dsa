// print the number by using while loop
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number:" << endl;
    cin >> n;
    int count = 1;
    while (count <= n)
    {
        cout << count << " ";
        count++;
    }
    return 0;
}
