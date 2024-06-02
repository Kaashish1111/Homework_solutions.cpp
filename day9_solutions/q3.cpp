// Third Pattern:

//        10
//        10 11
//        10 11 12
//        10 11 12 13
//        10 11 12 13 14
//        10 11 12 13 14 15

#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 1; i <= row; i++)
    {
        int num2=num;
        for (int j = 1; j <= i; j++)
        {
            cout << num2 << " ";
            num2++;
        }
        cout << endl;
    }
    return 0;
}