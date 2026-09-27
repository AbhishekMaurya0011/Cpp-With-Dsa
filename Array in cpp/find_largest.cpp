// WAP to find the largest number in given array.
#include <iostream>
using namespace std;
int main()
{
    int num[] = {12, 34, 65, 78, 54, 65};
    int size = 6;
    int largest = INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        if (num[i] > largest)
        {
            largest = num[i];
        }
    }
    cout << "The Largest Number is:" << largest;
    return 0;
}