// For Conditional Statements
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Age:" << endl;
    cin >> n;
    if (n >= 18)
        cout << "You can Vote" << endl;
    else
        cout << "YOU can't Vote" << endl;
    return 0;
}