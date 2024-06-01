// 5.	Print Sum of square of first n natural number.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter term till which you wnat square of the number: ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i * i;
    }
    cout << "Sum of square of first " << n << " natural number is: " << sum << endl;
    return 0;
}