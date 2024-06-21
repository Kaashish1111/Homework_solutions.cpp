// 6: Find the third smallest element in an array of unique elements size n. Where n>3.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    if (n <= 3)
    {
        cout << "Array size should be greater than 3." << endl;
    }
    int a[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "The third smallest element is: " << a[2] << endl;
    return 0;
}