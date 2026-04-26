#include <iostream>
#include <queue>
using namespace std;

int n, m;
char a[1005][1005];
int stx, sty;
int fx[4] = {1, -1, 0, 0};
int fy[4] = {0, 0, 1, -1};

struct xy {
    int x, y;
};

void bfs() {
    queue<xy> q;
    q.push({stx, sty});
    while (!q.empty()) {
        xy t = q.front();
        q.pop();
        for (int i = 0; i < 4; i++) {
            int x = t.x + fx[i];
            int y = t.y + fy[i];
            if (x >= 1 && x <= n && y >= 1 && y <= m && a[x][y] != '*') {
                if (a[x][y] == '2') {
                    cout << "YES";
                    return;
                }
                a[x][y] = '*';
                q.push({x, y});
            }
        }
    }
    cout << "NO";
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            if (a[i][j] == '1') {
                stx = i;
                sty = j;
            }
        }
    }

    bfs();
    return 0;
}