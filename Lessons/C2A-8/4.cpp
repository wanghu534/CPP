// 素数的筛法
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    int n;
    bool mark[1000005] = {false};
    mark[0] = mark[1] = true;
    for (int i = 2; i <= sqrt(1000000); i++)
    {
        if (!mark[i])
        {
            for (int j = i * 2; j <= 1000000; j += i)
            {
                mark[j] = true;
            }
        }
    }

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        if (mark[x] == false)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}