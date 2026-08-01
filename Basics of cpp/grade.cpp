// For checking student grade by marks
#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter Marks" << endl;
    cin >> marks;

    if (marks >= 90)
        cout << "Grade:A" << endl;
    else if (marks < 90 && marks >= 80)
        cout << "Grade:B" << endl;
    else if (marks < 80 && marks >= 70)
        cout << "Grade:c" << endl;
    else if (marks < 70 && marks >= 60)
        cout << "Grade:D" << endl;
    else
        cout << "Grade:E" << endl;
    return 0;
}