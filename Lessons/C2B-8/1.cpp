// 肥宅开小差
#include <iostream>
using namespace std;

int m, n, a, b;
bool mp[1005][1005];
bool mark[1005];

void dfs(int x) {
    mark[x] = true;
    for (int i = 0; i <= n; i++) {
        if (mp[x][i] && !mark[i]) {
            dfs(i);
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> a >> b;
        mp[a][b] = true;
        mp[b][a] = true;
    }
    dfs(1);
    if (mark[n]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}