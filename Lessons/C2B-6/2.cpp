// 不能把后背交给不放心的喵
#include <iostream>
using namespace std;

int n, a[20];
int vis[20];
int answer[20], sum = 0;

void todo()
{
    sum++;
}

void dg(int deep)
{
    if (deep > n)
    {
        todo();
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0 && a[answer[deep-1]] != i)
        {
            answer[deep] = i;
            vis[i] = 1;
            dg(deep + 1);
            vis[i] = 0;
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    dg(1);
    cout << sum;
}