// 路径方案
#include <iostream>
using namespace std;

int n, map[15][15];
int vis[15][15];
int dx[10] = {-1, 1, 0, 0};
int dy[10] = {0, 0, -1, 1};
int ans = 0;
int sx, sy, ex, ey;

void dfs(int x, int y) {
    if (x == ex && y == ey) {
        ans++;
        return;
    }
    for (int i = 0; i <= 3; i++) {
        int tx = x + dx[i];
        int ty = y + dy[i];
        if (tx < 1 || tx > n || ty < 1 || ty > n) {
            continue;
        }
        if (map[tx][ty] != 1 && vis[tx][ty] == 0) {
            vis[tx][ty] = 1;
            dfs(tx, ty);
            vis[tx][ty] = 0;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> map[i][j];
            if (map[i][j] == 2) {
                sx = i;
                sy = j;
            }
            if (map[i][j] == 3) {
                ex = i;
                ey = j;
            }
        }
    }
    vis[sx][sy] = 1;
    dfs(sx, sy);
    cout << ans << endl;
    return 0;
}