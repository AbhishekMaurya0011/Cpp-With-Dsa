// calcuate the Multiply of digits by using the funtions.
#include <iostream>
using namespace std;
int multiplypfDigits(int num)
{
    int digmul = 1;
    while (num > 0)
    {
        int lastdig = num % 10;
        num /= 10;
        digmul *= lastdig;
    }
    return digmul;
}
int main()
{
    int num;
    cout << "Enter Number:";
    cin >> num;
    cout << "Multiply Of Digits is:" << multiplypfDigits(num);
}