// calcuate the sum of digits by using the funtions.
#include <iostream>
using namespace std;
int sumofDigits(int num)
{
    int digsum = 0;

    while (num > 0)
    {
        int lastdig = num % 10;
        num /= 10;

        digsum += lastdig;
    }

    return digsum;
}

int main()
{
    int num;
    cout << "Enter Number:";
    cin >> num;
    cout << "Sum Of Digits:" << sumofDigits(num);
}