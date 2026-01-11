// 肥宅走迷宫
#include <iostream>
using namespace std;

int n, m, a, b;
bool mp[1005][1005];
bool mark[1005][1005];

void dfs(int y, int x) {
    mark[y][x] = true;
    if (y == n - 1 && x == m - 1) {
        return;
    }
    if (mp[y][x + 1] && !mark[y][x + 1]) {
        dfs(y, x + 1);
    }
    if (mp[y + 1][x] && !mark[y + 1][x]) {
        dfs(y + 1, x);
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char x;
            cin >> x;
            if (x == '.') {
                mp[i][j] = true;
            } else if (x == '#') {
                mp[i][j] = false;
            }
        }
    }
    dfs(0, 0);
    if (mark[n - 1][m - 1]) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}