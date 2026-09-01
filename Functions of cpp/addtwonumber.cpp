// Adding the two number using by the function in C++
#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}

int main()
{
    int x, y;
    cout << "Enter number A:";
    cin >> x;
    cout << "Enter Number B:";
    cin >> y;

    int result = add(x, y);
    cout << "Sum of Two Number is:" << result;
    return 0;
}