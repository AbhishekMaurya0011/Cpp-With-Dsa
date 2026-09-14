// WAP to calculate the percentage of obtained and total value given by the user.
#include <iostream>
using namespace std;
float percentage(float obtained, float total)
{
    return (obtained / total) * 100;
}

int main()
{
    float obtained, total;
    cout << "Enter Obtained :";
    cin >> obtained;

    cout << "Enter Total:";
    cin >> total;

    cout << "The Percentage is:" << percentage(obtained, total) << "%";
    return 0;
}