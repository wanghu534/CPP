#include <iostream>
#include <cstring>
using namespace std;

char a[120];
char b[120];
int main()
{
    cin >> a >> b;

    for (int i = 0; i <= strlen(a) - 1; i++)
    {
        if (a[i] >= 97 && a[i] <= 122)
            a[i] -= 32;
        if (b[i] >= 97 && b[i] <= 122)
            b[i] -= 32;
    }

    cout << strcmp(a, b);
    return 0;
}