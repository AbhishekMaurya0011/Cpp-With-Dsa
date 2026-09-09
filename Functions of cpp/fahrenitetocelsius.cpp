// WAP to convert the temperature  fahrenite into celsius by using the functions
#include <iostream>
using namespace std;
float celsius(float f)
{
    return (f - 32) * 5 / 9;
}

int main()
{
    float f;
    cout << "Enter the Temperature in fahrenite:";
    cin >> f;

    cout << "The temperature in celsius:" << celsius(f);
    return 0;
}