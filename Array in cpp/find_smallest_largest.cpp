// WAP to find the smallest and largest number in the given array.
#include <iostream>
using namespace std;
int main()
{
    int nums[] = {34, 45, 67, 75, 54, 33};
    int size = 6;
    int smallest = INT32_MAX;
    int largest = INT32_MIN;

    for (int i = 0; i < size; i++)
    {
        smallest = min(nums[i], smallest);
        largest = max(nums[i], largest);
    }
    cout << "The Smallest Number is:" << smallest << endl;
    cout << "The largest Number is:" << largest << endl;
    return 0;
}
