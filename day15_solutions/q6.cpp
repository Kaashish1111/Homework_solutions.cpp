// 6: Give a number n, find if it is prime or not, use a while loop and break here to solve it.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int count = 0;
    int i = 1;
    while (i <= num)
    {
        if (num % i == 0)
        {
            count++;
        }
        i++;
    }
    if (count == 2)
    {
        cout << num << " is a prime number.";
    }
    else
    {
        cout << num << " is not a prime number.";
    }
    return 0;
}