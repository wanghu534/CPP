#include <iostream>
#include <cstring>
using namespace std;

char a[120];
int main()
{
    cin >> a;

    for (int i = 0; i <= strlen(a) - 1; i++)
    {
        if (a[i] >= 65 && a[i] <= 90)
        {
            a[i] = a[i] + 32;
        }
    }
    cout << a;
    return 0;
}