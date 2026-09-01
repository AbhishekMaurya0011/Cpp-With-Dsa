// This is the code of call by reference in c++
#include <iostream>
using namespace std;
int change(int &num)
{
    num = num + 10;
    cout << endl;
    return num;
}
int main()
{
    int num = 100;
    cout << num;
    change(num);
    cout << num;
    cout << endl;
    cout << num;
}