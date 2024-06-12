// Write a program to convert decimal numbers to binary numbers using a for loop.

#include<iostream>
using namespace std;

int main(){
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int mul=1;
    int ans=0;
    // We need to use a separate variable for iteration
    int temp = binary;
    // We need to check the condition based on the temporary variable
    for(int i = temp; i > 0; i /= 10){
        int digit = temp % 10; // We need to get the remainder of temp, not binary
        ans = ans + digit * mul;
        mul = mul * 2;
        // We also need to update the temp variable in each iteration
        temp /= 10;
    }
    cout << "The decimal equivalent is: " << ans << endl;
    return 0;
}
