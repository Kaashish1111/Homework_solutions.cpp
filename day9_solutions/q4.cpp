// Fourth Pattern:

//       A B C D
//       A B C
//       A B
//       A

#include<iostream>
using namespace std;

int main(){
    int row;
    cout << "Enter number of rows: ";
    cin >> row;
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    int no_of_times=row;

    for(int i=1; i<=row; i++){
        char ch2=ch;
        for(int j=no_of_times; j>=1; j--){
            cout << ch2 << " ";
            ch2++;
        }
        no_of_times--;
        cout << endl;
    }
    return 0;
}