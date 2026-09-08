// WAP to make a simple calculator to perform addition, subtraction,multiplication,divison by using function and input by the user.
#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float divison(int a, int b)
{
    return (float)a / b;
}

int main()
{
    int a, b, choice;
    cout << "Enter Number A:";
    cin >> a;

    cout << "Enter Number B:";
    cin >> b;

    cout << "\n1.Addition";
    cout << "\n2.Subtraction";
    cout << "\n3.Multiplication";
    cout << "\n4.Divison";
    cout << endl;

    cout << "Enter Your Choice:";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "The Addition is:" << add(a, b);
        break;
    case 2:
        cout << "The Subtraction:" << sub(a, b);
        break;

    case 3:
        cout << "The Multiply is:" << multiply(a, b);
        break;

    case 4:
        if (b != 0)
            cout << "The Divison is:" << divison(a, b);

        else
            cout << "Cannot divide by zero:";
        break;

    default:
        cout << "Invalid Choice";
    }
    return 0;
}
