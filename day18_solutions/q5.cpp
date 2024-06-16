// 5: Print “Hello Coder Army” n times using Function

#include <iostream>
using namespace std;

void output(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Hello Coder Army" << endl;
    }
    return;
}

int main()
{
    int num;
    cout << "Enter the number of times you want to print: ";
    cin >> num;
    output(num);
    return 0;
}