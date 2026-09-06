// WAP to find the area of a circle by using the funtions and the radius is input by the user.
#include <iostream>
using namespace std;
float area(float r)
{
    return 3.14 * r * r;
}

int main()
{
    float r;
    cout << "Enter radius of a circle:";
    cin >> r;
    cout << "Area of a Circle is:" << area(r);
    return 0;
}