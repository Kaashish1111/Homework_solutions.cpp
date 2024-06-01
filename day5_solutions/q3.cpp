// 3.	Print char from ‘Z’ to ‘A’ with the help of a for loop.

#include <iostream>
using namespace std;

int main()
{
    char ch;
    for (ch = 'Z'; ch >= 'A'; ch--)
    {
        cout << ch << " ";
    }
    return 0;
}