// this the code of pass by value in c++
#include <iostream>
using namespace std;
int change(int num)
{
    num = num + 10;
    cout << num;
    cout << endl;
    return num;
}
int main()
{
    int num = 100;
    cout << num;
    cout << endl;
    change(num);
    cout << num;

    return 0;
}