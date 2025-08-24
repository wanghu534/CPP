// 不等数组长度之和
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[100000], b[100000] = {0};

    for (int i = n-1; i >= 0; i--)
    {
        cin >> a[i];
    }
    for (int i = m-1; i >= 0; i--)
    {
        cin >> b[i];
    }    
    
    int c[100000] = {0};
    for (int i = 0; i < 100000; i++)
    {
        c[i] = a[i] + b[i];
    }

    int lc = max(n, m);
    for (int i = lc-1; i >= 0; i--)
    {
        cout << c[i] << ' ';
    }

    return 0;
}