// WAP to find the circumferenece of a circle by using the funtions and the radius is input by the user.
#include <iostream>
using namespace std;
float circumference(float r)
{
    return 2 * 3.14 * r;
}

int main()
{
    float r;
    cout << "Enter Radius of a circle:";
    cin >> r;
    cout << "The Circumference of circle is:" << circumference(r);
    return 0;
}
