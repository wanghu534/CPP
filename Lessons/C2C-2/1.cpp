#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int n, m;
int a[101][101];
int fx[8] = {1, -1, 0, 0, 1, 1, -1, -1};
int fy[8] = {0, 0, 1, -1, -1, 1, -1, 1};
int iMax;


struct Node {
    int x, y, step;
};

queue<Node> q;

void bfs() {
    while (!q.empty()) {
        Node t = q.front();
        q.pop();
        iMax = max(iMax, t.step);
        for (int i = 0; i < 8; i++) {
            int x = t.x + fx[i];
            int y = t.y + fy[i];

            if (x >= 1 && x <= n && y >= 1 && y <= m && a[x][y] == 0) {
                q.push({x, y, t.step + 1});
                a[x][y] = 1;
            }
        }
    }
}

int main() {
    cin >> n >> m;
    char t;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> t;
            a[i][j] = t-'0';
            if (a[i][j] == 2) {
                q.push({i, j, 0});
            }
        }
    }
    bfs();
    cout << iMax << endl;
    return 0;
}