// 1: Find the cube of a number using Function.

#include<iostream>
using namespace std;

int cube(int n){
    return n*n*n;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Cube of " << num << " is: " << cube(num);
    return 0;
}