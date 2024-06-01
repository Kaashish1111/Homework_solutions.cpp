// 6.	Print Sum of cube of first n natural number.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter term till which you wnat cube : ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i * i * i;
    }
    cout << "Sum of cube of first " << n << " natural number is : " << sum << endl;
    return 0;
}