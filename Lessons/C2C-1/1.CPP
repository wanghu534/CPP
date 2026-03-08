#include <iostream>
#include <queue>
using namespace std;

int n, m;
int a[1005][1005];
bool b[1005];

void bfs()
{
    queue<int> q;
    q.push(1);
    while (!q.empty())
    {
        int t = q.front();
        q.pop();
        for (int i = 1; i <= n; i++) {
            if (a[t][i] == 1 && !b[i]) {
                if (i == n) {
                    cout << "YES";
                    return;
                }
                b[i] = true;
                q.push(i);
            }
        }
    }
    cout << "NO";
}
int main() {
    cin >> n >> m;
    int x, y;
    for (int i = 1; i <= m; i++) {
        cin >> x >> y;
        a[x][y] = a[y][x] = 1;
    }
    bfs();
    return 0;
}