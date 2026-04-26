#include <iostream>
using namespace std;

int m, n, x, y;
bool vis[105][105];
int horseMoves[8][2] = {{2, 1}, {2, -1}, {-2, 1}, {-2, -1}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}};

void dfs(int x, int y, int steps) {
    vis[x][y] = true;

    if (steps >= 3) {
        return;
    }
    for (int i = 0; i < 8; i++) {
        int nx = x + horseMoves[i][0];
        int ny = y + horseMoves[i][1];
        if (nx >= 1 && nx <= m && ny >= 1 && ny <= n) {
            dfs(nx, ny, steps + 1);
        }
    }
}

int main() {
    cin >> m >> n >> x >> y;
    dfs(x, y, 0);
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (vis[i][j]) {
                cout << "#";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}