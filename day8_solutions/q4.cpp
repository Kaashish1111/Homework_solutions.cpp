// Fourth Pattern:

// F G H I J K
// F G H I J K
// F G H I J K
// F G H I J K
// F G H I J K

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
    char ch;
    cout << "Enter the character: ";
    cin >> ch;
    for (int i = 1; i <= row; i++)
    {
        char ch2=ch;
        for (int j = 1; j <= column; j++)
        {
            cout << ch2 << " ";
            ch2++;
        }
        cout << endl;
    }
    return 0;
}