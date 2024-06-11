// 5: What will be the result below according to the precedence table.

//     2*3-48==5/4*6
//     6<<2-4*8/2
//     5>4<3/2-8%4+5
//     14-8+92>>2+70

#include<iostream>
using namespace std;

int main(){
    int ans=2*3-48==5/4*6;
    cout << "1. " << ans << endl;
    int ans1= 6<<2-4*8/2;
    cout << "2. " << ans1 << endl;
    int ans2= 5>4<3/2-8%4+5;
    cout << "3. " << ans2 << endl;
    int ans3= 14-8+92>>2+70;
    cout << "4. " << ans3 << endl;
    return 0;
}