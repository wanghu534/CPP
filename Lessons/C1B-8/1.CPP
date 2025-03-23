#include <iostream>
#include <cstring>
using namespace std;

char a[120];
char b[120];

int main()
{
    cin >> a >> b;

    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] -= 32;
        }
    }

    for (int i = 0; i < strlen(b); i++)
    {
        if (b[i] >= 'a' && b[i] <= 'z')
        {
            b[i] -= 32;
        }
    }

    int result = strcmp(a, b);
    if (result == 0)
    {
        cout << "0";
    }
    else if (result < 0)
    {
        cout << "-1";
    }
    else if (result > 0)
    {
        cout << "1";
    }
    return 0;
}