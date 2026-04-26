// 数水块
#include <iostream>
using namespace std;

int n, m, ans = 0;
char mp[1005][1005];
int vis[1005][1005];
int dx[10] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[10] = {-1, 0, 1, -1, 1, -1, 0, 1};

void dfs(int x, int y) {
    for (int i = 0; i <= 7; i++) {
        int tx = x + dx[i];
        int ty = y + dy[i];
        if (tx < 1 || tx > n || ty < 1 || ty > m) {
            continue;
        }
        if (mp[tx][ty] == 'W' && !vis[tx][ty]) {
            vis[tx][ty] = 1;
            dfs(tx, ty);
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mp[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (mp[i][j] == 'W' && !vis[i][j]) {
                ans++;
                vis[i][j] = 1;
                dfs(i, j);
            }
        }
    }
    cout << ans << endl;
    return 0;
}