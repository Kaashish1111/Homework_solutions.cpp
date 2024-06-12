// Write a program to convert binary to Octal numbers

#include <iostream>
using namespace std;

int main()
{
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    int rem, mul = 1, decimal = 0;
    while (binary)
    {
        rem = binary % 10;
        binary /= 10;
        decimal += rem * mul;
        mul *= 2;
    }
    int mul2 = 1, octal = 0;
    while (decimal)
    {
        rem = decimal % 8;
        decimal /= 8;
        octal += rem * mul2;
        mul2 *= 10;
    }
    cout << "The octal representation is: " << octal << endl;
    return 0;
}