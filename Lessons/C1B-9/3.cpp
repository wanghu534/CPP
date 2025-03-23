#include <cstdio>
#include <cstring>
using namespace std;

char a[25];
int main()
{
    scanf("%s", a);
    for (int i = strlen(a) - 1; i >= 0; i--)
    {
        printf("%c", a[i]);
    }
    return 0;
}