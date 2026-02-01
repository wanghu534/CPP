#include <iostream>
using namespace std;

int n, mp[15][15];
bool vis[15][15];
int ans = 0;
int dx[10] = {-1, 1, 0, 0};
int dy[10] = {0, 0, -1, 1};

void dfs(int x, int y, bool key) {
    if (x == n && y == n && key == true) {
        ans++;
        return;
    }
    if (ans != 0) {
        return;
    }
    for (int i = 0; i <= 3; i++) {
        int tx = x + dx[i];
        int ty = y + dy[i];
        if (tx < 1 || tx > n || ty < 1 || ty > n) {
            continue;
        }
        if (mp[tx][ty] != 1 && vis[tx][ty] == 0) {
            if (mp[tx][ty] == 0) {
                vis[tx][ty] = 1;
                dfs(tx, ty, key);
            } else if (mp[tx][ty] == 2) {
                vis[tx][ty] = 1;
                dfs(tx, ty, true);
            } else if (mp[tx][ty] == 3 && key) {
                vis[tx][ty] = 1;
                dfs(tx, ty, key);
            }

            vis[tx][ty] = 0;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> mp[i][j];
        }
    }

    vis[1][1] = 1;
    dfs(1, 1, false);
    
    if (ans != 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}