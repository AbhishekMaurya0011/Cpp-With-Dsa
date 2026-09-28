// WAP to print the index value of largest number and also print the largest number in the given array.
#include <iostream>
using namespace std;
int main()
{
    int nums[] = {56, 65, 45, 98, 56, 97};
    int size = 6;
    int largest = 0;
    for (int i = 0; i < size; i++)
    {
        if (nums[i] > nums[largest])
        {
            largest = i;
        }
    }
    cout << "The Largest Number Index is:" << largest << endl;
    cout << "The Largest Number is:" << nums[largest];
    return 0;
}