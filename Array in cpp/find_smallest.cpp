// WAP to find the smallest number in given array.
#include <iostream>
using namespace std;
int main()
{
    int num[] = {5, 15, 22, 1, -15, 24};
    int size = 6;
    int smallest = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        if (num[i] < smallest)
        {
            smallest = num[i];
        }
    }
    cout << "The Smallest Number is:=" << smallest << endl;
    return 0;
}
