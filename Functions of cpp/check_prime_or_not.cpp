// WAP to check the number is prime or not by using the function and number is given by the user.
#include <iostream>
using namespace std;
int checkPrime(int num)
{
    if (num < 2)
    {
        cout << "The Given Number is Not Prime Number" << num;
        return 0;
    }
    if (num == 2)
    {
        cout << "The Given Number is prime:" << num;
        return 1;
    }
    if (num % 2 == 0)
    {
        cout << "The Given Number is Not Prime Number:" << num;
        return 0;
    }

    for (int i = 3; i * i < num; i += 2)
    {
        if (num % i == 0)
        {
            cout << "The Given Number is Not Prime:" << num;
            return 0;
        }
    }

    cout << "The Given Number is Prime Number:" << num;
    return 1;
}

int main()
{
    int num;
    cout << "Enter a Number :";
    cin >> num;
    checkPrime(num);
    return 0;
}