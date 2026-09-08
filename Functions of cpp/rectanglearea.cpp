// WAP to calculate the area of a rectangle by using the funtions.
#include <iostream>
using namespace std;

float area(float length, float width)
{
    return length * width;
}

int main()
{
    float l, w;
    cout << "Enter The Rectangle Length:";
    cin >> l;

    cout << "Enter The Rectangle Width:";
    cin >> w;

    cout << "The Area Of Rectangle is:" << area(l, w);

    return 0;
}
