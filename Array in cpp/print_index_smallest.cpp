// WAP to print the index value of smallest number and also print the smallest number in the given array.
#include <iostream>
using namespace std;
int main()
{
    int nums[] = {88, 45, 65, 76, 54, 49};
    int size = 6;
    int smallest = 0;
    for (int i = 0; i < size; i++)
    {
        if (nums[i] < nums[smallest])
        {
            smallest = i;
        }
    }
    cout << "The smallest Number Index is:" << smallest << endl;
    cout << "The Samallest Number is:" << nums[smallest];
    return 0;
}