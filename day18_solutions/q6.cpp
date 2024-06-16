// 6: Given two numbers n, r. Find nCr (Combination). Use Function here.

#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;
    float ans = fact(n)/(fact(r)*(fact(n-r)));
    cout << "The value of nCr is: " << ans << endl;
    return 0;
}