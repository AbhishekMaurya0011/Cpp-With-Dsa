// WAP to find the simple interest using by the function
#include <iostream>
using namespace std;
float simpleInterest(float p, float r, float t)
{
    return (p * r * t) / 100;
}

int main()
{
    float p, r, t;
    cout << "Enter Principal Amount:";
    cin >> p;

    cout << "Enter Rate :";
    cin >> r;

    cout << "Enter Time:";
    cin >> t;

    cout << "Simple Interest is:" << simpleInterest(p, r, t);
    cout << endl;
    cout << "Total Amount is:" << simpleInterest(p, r, t) + p;
}