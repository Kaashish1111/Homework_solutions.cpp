// Second Pattern:

//     A
//     A B
//     A B C
//     A B C D
//     A B C D E

#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter number of rows: ";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << ch << " ";
            ch++;
            if (ch > 'Z')
            {
                ch = 'A';
            }
        }
        cout << endl;
    }
    return 0;
}