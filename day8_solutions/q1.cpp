// First Pattern:

//        4 4 4 4 4 4
//        4 4 4 4 4 4
//        4 4 4 4 4 4
//        4 4 4 4 4 4
//        4 4 4 4 4
#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;
    int column;
    cout << "Enter the number of columns: ";
    cin >> column;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            cout << "4 ";
        }
        cout << endl;
    }
    return 0;
}