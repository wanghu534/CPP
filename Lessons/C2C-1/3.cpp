#include <iostream>
#include <queue>
using namespace std;

int n;
int a[105][105];
int stx = 1, sty = 1;
int fx[8] = {1, -1, 0, 0, 1, 1, -1, -1};
int fy[8] = {0, 0, 1, -1, -1, 1, -1, 1};

struct Node {
    int x, y, step;
};

void bfs() {
    queue<Node> q;
    q.push({stx, sty, 0});
    a[stx][sty] = 1;

    while (!q.empty()) {
        Node t = q.front();
        q.pop();

        if (t.x == n && t.y == n) {
            cout << t.step;
            return;
        }

        for (int i = 0; i < 8; i++) {
            int x = t.x + fx[i];
            int y = t.y + fy[i];

            if (x >= 1 && x <= n && y >= 1 && y <= n && a[x][y] == 0) {
                a[x][y] = 1;                
                q.push({x, y, t.step + 1});
            }
        }
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }

    bfs();
    return 0;
}