// 周末舞会
#include <iostream>
#include <queue>
using namespace std;

int m, n, k;
queue<int> male, female;

int main() {
    cin >> m >> n >> k;
    for (int i = 1; i <= m; i++)
    {
        male.push(i);
    }
    for (int i = 1; i <= n; i++)
    {
        female.push(i);
    }
    for (int i = 0; i < k; i++)
    {
        int x = male.front();
        int y = female.front();
        male.pop();
        female.pop();
        male.push(x);
        female.push(y);
        cout << x << " " << y << endl;
    }
    return 0;
}