// WAP to find the area of a triange by using the function.
#include <iostream>
using namespace std;
float area(float base, float height)
{
    return 0.5 * base * height;
}

int main()
{
    float base, height;
    cout << "Enter Base of Triangle:";
    cin >> base;

    cout << "Enter Height Of Triangle:";
    cin >> height;

    cout << "Area Of Triangle is:" << area(base, height) << " square units";
    return 0;
}