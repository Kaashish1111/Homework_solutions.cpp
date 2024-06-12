// Write a program to convert binary numbers to decimal numbers using a for loop.

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a binary number: ";
    cin >> num;
    int ans = 0;
    int mul = 1;

    for (int temp = num; temp > 0; temp /= 2) {
        int rem = temp % 2;
        ans += rem * mul;
        mul *= 10;
    }

    cout << "Binary representation: " << ans << endl;
    return 0;
}