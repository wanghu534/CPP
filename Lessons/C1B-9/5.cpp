#include <cstdio>
#include <cstring>
using namespace std;

char a[10];
int main()
{
    scanf("%s", a);
    for (int i = 0; i <= strlen(a) - 1; i++)
    {
        if (a[i] == '0' && a[i+1] != ':')
            continue;
        else if (a[i] == ':')
            printf("%c", '-');
        else
            printf("%c", a[i]);
    }
    return 0;
}