// 5: Find the second largest element in an array of unique elements of size n. Where n>3.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    int secondMax = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
        else if (arr[i] > secondMax && arr[i] != max)
        {
            secondMax = arr[i];
        }
    }
    cout << "The second largest element in the array is: " << secondMax << endl;
    return 0;
}