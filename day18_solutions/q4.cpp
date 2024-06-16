// 4: Swap 2 numbers a, b without using extra variables. Range of -10000<=a,b<=100000.\

#include <iostream>
using namespace std;

void Swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Before swap: a=" << a << " b=" << b << endl;
    Swap(a, b);
    cout << "After swap: a=" << a << " b=" << b << endl;
    return 0;
}