// Second Pattern:

//        1 4 9 16 25
//        1 4 9 16 25
//        1 4 9 16 25
//        1 4 9 16 25
//        1 4 9 16 25
//        1 4 9 16 25

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
        int num = 1;
        for (int j = 1; j <= column; j++)
        {
            cout << num * num<<"\t";
            num++;
        }
        cout << endl;
    }
    return 0;
}