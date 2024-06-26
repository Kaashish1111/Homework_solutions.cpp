// 2: Selection Sort Algorithm to sort the array of integers in increasing order by taking the highest number to last place. Question was explained in the class.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no of elements";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n - 1; i > 0; i--)
    {
        // Assume the first element is the largest
        int maxIndex = 0;
        for (int j = 1; j <= i; j++)
        {
            // Update maxIndex if the current element is larger
            if (arr[j] > arr[maxIndex])
            {
                maxIndex = j;
            }
        }
        // Swap the found maximum element with the element at the end of the unsorted portion
        swap(arr[maxIndex], arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}