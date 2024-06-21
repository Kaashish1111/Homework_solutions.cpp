// 1: Take 20 elements from user input and find its sum with the help of an array.

#include <iostream>
using namespace std;

int main()
{
    int a[20];
    int sum = 0;
    cout << "Enter 20 elements: ";
    for (int i = 0; i < 20; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    cout << "Sum of the elements: " << sum << endl;
    return 0;
}