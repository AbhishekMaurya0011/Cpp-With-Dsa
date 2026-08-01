// For checking the alfabet is lower case or upper case
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter Alfabet:" << endl;
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
        cout << "Lower Case" << endl;
    else
        cout << "Upper Case" << endl;
    return 0;
}