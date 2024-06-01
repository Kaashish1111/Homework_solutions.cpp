// 7.	Print n’th Fibonacci number.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int first = 0, second = 1, next;
    for (int i = 3; i <= n; i++)
    {
        next = first + second;
        first = second;
        second = next;
    }
    cout << "The " << n << "th Fibonacci number is: " << next << endl;
    return 0;
}