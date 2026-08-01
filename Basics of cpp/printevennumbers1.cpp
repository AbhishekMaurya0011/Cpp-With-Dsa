// print the even number using the while loop
#include <iostream>
using namespace std;
int main()
{
    int n;
    int count = 1;
    cout << "Enter Number: " << endl;
    cin >> n;
    cout << "Even Numbers: " << endl;
    while (count <= n)
    {
        if (count % 2 == 0)
        {
            cout << count << " ";
        }
        count++;
    }
    return 0;
}