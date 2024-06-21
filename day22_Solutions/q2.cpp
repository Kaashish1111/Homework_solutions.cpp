// 2: Calculate the average of elements in an array of size 18.

#include <iostream>
using namespace std;

int main()
{
    int arr[18];
    int sum = 0;
    float average;
    for (int i = 0; i < 18; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 18; i++)
    {
        sum += arr[i];
    }
    average = (float)sum / 18;
    cout << "Average of elements in the array is: " << average << endl;
    return 0;
}