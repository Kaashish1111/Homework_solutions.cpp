// 6.Print all Odd numbers from 1 to n, take n as an input from the user.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Odd numbers from 1 to " << n << " are: ";
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}