// 5: Print all the Capital and small letters  using a while loop. It means A-Z, then a-z.

#include <iostream>
using namespace std;

int main()
{
    char ch = 'A';
    while (ch <= 'z')
    {
        cout << ch << " ";
        ch++;
        if (ch > 'Z' && ch < 'a')
        {
            ch = 'a';
        }
    }
    return 0;
}