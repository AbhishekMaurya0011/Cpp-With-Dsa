// WAP to print the index value of smallest and largest number and also print the smallest and largest number in the given array.
#include <iostream>
using namespace std;
int main()
{
    int nums[] = {34, 45, 67, 75, 54, 33};
    int size = 6;
    int smallest = 0;
    int largest = 0;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] < nums[smallest])
        {
            smallest = i;
        }

        if (nums[i] > nums[largest])
        {
            largest = i;
        }
    }
    cout << "The Smallest Number index is:" << smallest << endl;
    cout << "The Smallest Number is:" << nums[smallest] << endl;

    cout << "The largest Number index is:" << largest << endl;
    cout << "The largest Number is:" << nums[largest];
    return 0;
}