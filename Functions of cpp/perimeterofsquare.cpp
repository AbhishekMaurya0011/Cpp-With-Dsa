// WAP to find the peremeter of a square by using the function and the side is given by the user.
#include <iostream>
using namespace std;
int perimeter(int side)
{
    return 4 * side;
}

int main()
{
    int n;
    cout << "Enter Side Of Square:";
    cin >> n;

    cout << "The Perimeter Of Square is:" << perimeter(n);
    return 0;
}