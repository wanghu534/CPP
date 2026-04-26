#include <iostream>
using namespace std;

int n;
int map[8][8];
bool vis[8][8];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int maxSum = -1000000;

void dfs(int x, int y, int currentSum) {
    if (x == n && y == n) {
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
        return;
    }

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 1 && nx <= n && ny >= 1 && ny <= n && !vis[nx][ny]) {
            vis[nx][ny] = true;
            dfs(nx, ny, currentSum + map[nx][ny]);
            vis[nx][ny] = false;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> map[i][j];
        }
    }
    vis[1][1] = true;
    dfs(1, 1, map[1][1]);

    cout << maxSum << endl;

    return 0;
}