// WAP to find the number of factors of any number by using the funtion.
#include <iostream>
using namespace std;
int factor(int n)
{
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }

    return count;
}

int main()
{
    int n;
    cout << "Enter Number:";
    cin >> n;

    cout << "Number Of Factors is:" << factor(n);
    return 0;
}