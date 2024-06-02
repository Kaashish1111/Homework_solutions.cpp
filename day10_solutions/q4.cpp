// Fourth Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.


//         E
//       E D
//     E D C
//   E D C B
// E D C B A

#include<iostream>
using namespace std;

int main(){
    int row;
    cout << "Enter number of rows: ";
    cin >> row;
    int no_of_gaps=row -1;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=no_of_gaps;j++){
            cout << "  ";
        }
        char ch=64+5;
        int no_of_times=row-no_of_gaps;
        for(int k=1;k<=no_of_times;k++){
            cout << ch << " ";
            ch--;
        }
        no_of_gaps--;
        cout << endl;
    }
    return 0;
}