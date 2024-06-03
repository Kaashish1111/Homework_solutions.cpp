// Second Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.


//          1
//        1 2 3
//      1 2 3 4 5
//    1 2 3 4 5 6 7
//  1 2 3 4 5 6 7 8 9

#include<iostream>
using namespace std;

int main(){
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;
    for(int i=1;i<=row;i++){
        int num=1;
        int no_of_gaps=row-i;
        for(int j=1;j<=no_of_gaps;j++){
            cout << " ";
        }
        for(int k=1;k<=i;k++){
            cout << num;
            num++;
        }
        for(int l=1;l<=no_of_gaps;l++){
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}