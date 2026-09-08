// WAP to convert the temperature celsius into fahrenite by using the functions
#include <iostream>
using namespace std;
float fahrenhite(float celsius)
{
    return (celsius * 9 / 5) + 32;
}
int main()
{
    float c;
    cout << "Enter the Temperature in celsius: ";
    cin >> c;

    cout << "The temperature in Fahrenite:" << fahrenhite(c) << endl;
    return 0;
}
