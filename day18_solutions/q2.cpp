// 2: Reverse a number n using Function, Constraints: -5000<=n<=5000

#include <iostream>
using namespace std;

int reverse(int n)
{
    int rev = 0;
    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (-5000 <= n && n <= 5000)
    {
        cout << "Reverse of " << n << " is " << reverse(n) << endl;
    }
    else
    {
        cout << "Number is out of range." << endl;
    }
    return 0;
}