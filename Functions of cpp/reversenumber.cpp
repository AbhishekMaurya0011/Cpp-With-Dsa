// WAP to reverse the number of digits using by the function and the digit input by the user.
#include <iostream>
using namespace std;
int reverseNumber(int n)
{
    int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main()
{
    int n;
    cout << "Enter Number:";
    cin >> n;
    cout << "Reverse Number is:" << reverseNumber(n);
    return 0;
}