// Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

//         5
//       5 4
//     5 4 3
//   5 4 3 2
// 5 4 3 2 1

#include<iostream>
using namespace std;

int main(){
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;
    int no_of_gaps=row-1;
    for(int i=1; i<=row; i++){
        for(int j=1; j<=no_of_gaps; j++){
            cout << "  ";
        }
        int no_of_times=row-no_of_gaps;
        int num=row;
        for(int k=1;k<=no_of_times;k++){
            cout << num << " ";
            num--;
        }
        no_of_gaps--;
        cout << endl;
    }
    return 0;
}