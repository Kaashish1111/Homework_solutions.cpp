// 3: Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it.

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int target;
    cout << "Enter the target element: ";
    cin >> target;
    int flag = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == target)
        {
            cout << "Element found at index: " << ++i << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Element not found. Index: -1" << endl;
    }
    return 0;
}