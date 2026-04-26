#include <iostream>
using namespace std;

int n, m, mp[1005][1005];
bool vis[1005][1005];
bool found = false;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int sx, sy, ex, ey;

void dfs(int x, int y) {
    if (x == ex && y == ey) {
        found = true;
        return;
    }
    if (found) {
        return;
    }
    for (int i = 0; i <= 3; i++) {
        int tx = x + dx[i];
        int ty = y + dy[i];
        if (tx < 1 || tx > n || ty < 1 || ty > n || mp[x][y] < mp[tx][ty]) {
            continue;
        }
        if (!vis[tx][ty]) {
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
    
    cin >> sx >> sy >> ex >> ey;
    vis[sx][sy] = 1;
    dfs(sx, sy);
    
    if (found) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}