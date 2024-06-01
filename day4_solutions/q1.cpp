// 1.	Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a > b)
    {
        cout << "The bigger number is: " << a << endl;
    }
    else
    {
        cout << "The bigger number is: " << b << endl;
    }
    return 0;
}