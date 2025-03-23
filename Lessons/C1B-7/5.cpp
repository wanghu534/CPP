#include <iostream>
#include <cstring>
using namespace std;

char a[300];
int main()
{
    char ch;
    cin >> ch;
    cin >> a;

    for (int i = 0; i <= strlen(a) - 1; i++)
    {
        if (a[i] != ch)
            cout << a[i];
    }
    return 0;
}