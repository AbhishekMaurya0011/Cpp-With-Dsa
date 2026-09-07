// WAP to caluclate the percentage of a student marks using the functions and input marks by the user.
#include <iostream>
using namespace std;
float percentage(float total, float obtained)
{
    return (obtained / total) * 100;
}
int main()
{
    float total, obtained;
    cout << "Enter The Total marks:";
    cin >> total;
    cout << "Enter Obtained marks:";
    cin >> obtained;

    cout << "The percentage is: " << percentage(total, obtained) << "%";
    return 0;
}