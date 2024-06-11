// Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
//         A
//       A B A
//     A B C B A
//   A B C D C B A
// A B C D E D C B A


#include<iostream>
using namespace std;
int main(){
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;
    for(int i = 1; i <= row; i++){
        char ch='A';
        int no_of_gaps=row-i;
        for(int j=1;j<=no_of_gaps;j++){
            cout << "  ";
        }
        for(int k=1;k<=i;k++){
            cout << ch << " ";
            ch++;
        }
        char ch1=ch-1;
        for(int l=2;l<=i;l++){
            ch1--;
            cout << ch1<<" ";
        }
        cout << endl;
    }
}