// Fourth Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

//     *
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *

#include<iostream>
using namespace std;

int main(){
        int row;
    cout << "Enter the number of rows: ";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        int no_of_gaps = row - i;
        for (int j = 1; j <= row - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    for (int i = row ; i >= 1; i--)
    {
        int no_of_gaps = row - i;
        for (int j = 1; j <= row - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    return 0;
}