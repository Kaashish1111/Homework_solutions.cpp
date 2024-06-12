// Write a program to convert Octal numbers to binary numbers

#include <iostream>
using namespace std;

int main()
{
    int octal;
    cout << "Enter a octal number: ";
    cin >> octal;
    int decimal = 0, mul = 1;
    while (octal)
    {
        int digit = octal % 10;
        octal /= 10;
        decimal += digit * mul;
        mul *= 8;
    }
    int binary = 0;
    int mul2 = 1;
    while (decimal)
    {
        int digit = decimal % 2;
        decimal /= 2;
        binary += digit * mul2;
        mul2 *= 10;
    }
    cout << "The binary representation is: " << binary;
    return 0;
}