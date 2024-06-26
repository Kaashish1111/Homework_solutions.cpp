// 3: Selection Sort Algorithm to sort the array of char in ascending order.

#include <iostream>
using namespace std;

int main()
{
    int n;
    char arr[100];
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int index = 0;
    for (int i = 0; i < n - 1; i++)
    {
        index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
                index = j;
        }
        swap(arr[index], arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}