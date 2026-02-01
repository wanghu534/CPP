#include <iostream>
using namespace std;

int n, m, t;
int sx, sy, fx, fy;
int map[10][10];
bool vis[10][10];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int cnt = 0;

void dfs(int x, int y) {
    if (x == fx && y == fy) {
        cnt++;
        return;
    }
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx < 1 || nx > n || ny < 1 || ny > m) {
            continue;
        }
        if (vis[nx][ny] || map[nx][ny]) {
            continue;
        }
        vis[nx][ny] = 1;
        dfs(nx, ny);
        vis[nx][ny] = 0;
    }
}

int main() {
    cin >> n >> m >> t;
    cin >> sx >> sy >> fx >> fy;
    for (int i = 0; i < t; i++) {
        int x, y;
        cin >> x >> y;
        map[x][y] = 1;
    }

    vis[sx][sy] = 1;
    dfs(sx, sy);
    cout << cnt << endl;

    return 0;
}