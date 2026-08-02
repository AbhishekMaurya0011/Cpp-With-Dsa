// Variable Declaration
#include <iostream>
using namespace std;
int main()
{
    string name;
    int age;
    float price;

    cout << "Enter Name:" << endl;
    getline(cin, name);

    cout << "Enter Age:" << endl;
    cin >> age;

    cout << "Enter Price:" << endl;
    cin >> price;

    cout << "Name:" << name << endl;
    cout << "Age:" << age << endl;
    cout << "Price:" << price << endl;

    return 0;
}