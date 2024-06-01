// 3.	Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number between 1 and 12: ";
    cin >> n;
    if (n < 1 || n > 12)
    {
        cout << "Invalid input";
    }
    else
    {
        switch (n)
        {
        case 1:
            cout << "January";
            break;
        case 2:
            cout << "February";
            break;
        case 3:
            cout << "March";
            break;
        case 4:
            cout << "April";
            break;
        case 5:
            cout << "May";
            break;
        case 6:
            cout << "June";
            break;
        case 7:
            cout << "July";
            break;
        case 8:
            cout << "August";
            break;
        case 9:
            cout << "September";
            break;
        case 10:
            cout << "October";
            break;
        case 11:
            cout << "November";
            break;
        case 12:
            cout << "December";
            break;
        }
    }
    return 0;
}