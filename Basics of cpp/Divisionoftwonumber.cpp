// Division of two number which is given the value of A and B by the user
#include <iostream>
using namespace std;
int main()
{
    float a;
    float b;
    float div = 0;
    cout << "Enter Number A: ";
    cin >> a;

    cout << "Enter Number B: ";
    cin >> b;

    div = a / b;
    cout << "Division of A and B is: " << div << endl;
    return 0;
}