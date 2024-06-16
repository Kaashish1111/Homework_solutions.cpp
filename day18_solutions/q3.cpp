// 3: There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.

#include <iostream>
using namespace std;

void Swap(int &a, int &b, int &c)
{
    int temp;
    temp = a;
    a = b;
    b = c;
    c = temp;
}

int main()
{
    int a, b, c;
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;
    cout << "Before swap: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    Swap(a, b, c);
    cout << "After swap: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    return 0;
}