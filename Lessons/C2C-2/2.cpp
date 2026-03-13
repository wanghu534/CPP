#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

int n;
int a[1001][1001];
int fx[4] = {1, -1, 0, 0};
int fy[4] = {0, 0, 1, -1};
int stX, stY;
double result;

struct Node {
    int x, y, step;
};

queue<Node> q;

void bfs() {
    while (!q.empty()) {
        Node t = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int x = t.x + fx[i];
            int y = t.y + fy[i];

            if (x >= 1 && x <= n && y >= 1 && y <= n) {
                if (a[x][y] == 0)
                {
                    q.push({x, y, t.step + 1});
                    a[x][y] = 1;
                }
                else if (a[x][y] == 2)
                {
                    result = ceil((t.step + 1)/2.0);
                    
                    return ;
                }
            }
        }
    }
}

int main() {
    cin >> n;
    char t;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> t;
            a[i][j] = t-'0';
            if (a[i][j] == 2 && !stX) {
                stX = i;
                stY = j;
                q.push({i, j, 0});
                a[i][j] = 1;
                // cout << stX << " " << stY;
            }
        }
    }
    bfs();
    if (result)
    {
        cout << result;
    }
    else {
        cout << -1;
    }
    
    return 0;
}