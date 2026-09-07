/* WAP to find a number is a pelindrome or not by using the function
and the number is input by the user*/
#include <iostream>
using namespace std;
bool palindrome(int n)
{
    int original = n, rev = 0;

    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return original == rev;
}

int main()
{
    int n;
    cout << "Enter Number :";
    cin >> n;
    if (palindrome(n))
        cout << "This Numnber is a palindrome";
    else
        cout << "This Number is Not a palindrome";
    return 0;
}