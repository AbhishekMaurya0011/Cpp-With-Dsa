// For checking the alfabet is in loer case or upper case by using number method
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter Alfabet:" << endl;
    cin >> ch;
    if (ch >= '65' && ch <= '90')
        cout << "Upper Case" << endl;
    else
        cout << "lower Case" << endl;
    return 0;
}