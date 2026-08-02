// print Alphabet pattern using the for loop
//  for n=4
// A B C D
// E F G H
// I J K L
// M N O P
#include <iostream>
using namespace std;
int main()
{
    int n;
    char ch = 'A';
    cout << "Enter Number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}