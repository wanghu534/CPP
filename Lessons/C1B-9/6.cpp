#include <cstdio>
#include <cstring>
using namespace std;

int a[1000002];
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int k;
    scanf("%d", &k);
    for (int i = 0; i <= n - 1; i++)
    {
        if (a[i] != k)
            printf("%d ", a[i]);
    }
    return 0;
}