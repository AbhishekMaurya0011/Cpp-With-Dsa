// checking for positive or negative number by using ternary operator
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number:" << endl;
    cin >> n;
    cout << (n >= 0 ? "Positive" : "Negative") << endl;
    return 0;
}