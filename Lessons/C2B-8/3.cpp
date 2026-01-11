// 小蝌蚪找妈妈1
#include <iostream>
using namespace std;

int m, n, a, b, cnt = 0;
bool mp[1005][1005];
bool mark[1005];

void dfs(int x) {
    mark[x] = true;
    cnt++;
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
    if (cnt == n) {
        cout << "no" << endl;
    } else {
        cout << "yes" << endl;
    }

    return 0;
}