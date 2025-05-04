#include <iostream>
#include <cstdio>
using namespace std;

int a[1200];
int b[1200];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
        {
            sum++;
        }
    }
    printf("%.2lf%%", double(sum) / n * 100);
    return 0;
}