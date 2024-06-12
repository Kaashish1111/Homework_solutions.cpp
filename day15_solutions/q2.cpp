// 2: Find the factorial of a number n using a while loop and do a while loop.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int i = 1;
    int factroial = 1;
    while (i <= num)
    {
        factroial *= i;
        i++;
    }
    cout << "Factorial of " << num << " is: " << factroial << endl;
    return 0;
}