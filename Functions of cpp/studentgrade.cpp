// WAP to check the student grade with the help of percentage of students marks by the funtions.
#include <iostream>
using namespace std;
char grade(float percentage)
{
    if (percentage >= 90)
        return 'A';
    else if (percentage >= 75)
        return 'B';
    else if (percentage >= 60)
        return 'C';
    else if (percentage >= 40)
        return 'D';
    else
        return 'F';
}

int main()
{
    float percentage;
    cout << "Enter The Percentage Of Student:";
    cin >> percentage;
    cout << "The Student Grade is:" << grade(percentage);
    return 0;
}