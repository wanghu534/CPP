// 吃苹果
#include <iostream>
using namespace std;

int w, h, cnt = 0;
bool mp[55][55];
bool mark[55][55];
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};
int sx, sy;

void dfs(int x, int y) {
    mark[x][y] = true;
    cnt++;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || nx >= w || ny < 0 || ny >= h) {
            continue;
        }

        if (mp[nx][ny] && !mark[nx][ny]) {
            dfs(nx, ny);
        }
    }
}

int main() {
    cin >> w >> h;

    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            char content;
            cin >> content;

            if (content == '.') {
                mp[i][j] = true;
            } else if (content == '#') {
                mp[i][j] = false;
            } else if (content == '@') {
                mp[i][j] = true;
                sx = i;
                sy = j;
            }
        }
    }

    for (int i = 0; i < w; i++) {
        for (int j = 0; j < h; j++) {
            mark[i][j] = false;
        }
    }

    dfs(sx, sy);
    cout << cnt << endl;

    return 0;
}
