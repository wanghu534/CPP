#include <iostream>
#include <cstring>
using namespace std;

char a[20];
char b[20];
int main()
{
    cin >> a >> b;
    int aLen = strlen(a);
    int bLen = strlen(b);

    if (aLen < bLen)
    {
        strcat(a, b);
        cout << a;
    }
    else if (bLen < aLen)
    {
        strcat(b, a);
        cout << b;
    }
    return 0;
}