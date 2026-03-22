#include <iostream>
#include <queue>
using namespace std;

int sx1, sy1, sx2, sy2;
int Move[12][2] = {{1, 2},  {2, 1},  {2, -1}, {1, -2}, {-1, -2}, {-2, -1},
                   {-2, 1}, {-1, 2}, {2, 2},  {2, -2}, {-2, 2},  {-2, -2}};

struct Point {
    int x, y, step;
};

int bfs(int startX, int startY) {
    bool v[21][21] = {1};
    queue<Point> q;
    q.push({startX, startY, 0});
    v[startX][startY] = true;
    while (!q.empty()) {
        Point p = q.front();
        q.pop();

        if (p.x == 1 && p.y == 1) {
            return p.step;
        }

        for (int i = 0; i < 12; i++) {
            int nx = p.x + Move[i][0];
            int ny = p.y + Move[i][1];
            if (nx < 1 || nx > 20 || ny < 1 || ny > 20 || v[nx][ny] == 1)
                continue;
            q.push({nx, ny, p.step + 1});
            v[nx][ny] = 1;
        }
    }
    return 0;
}

int main() {
    cin >> sx1 >> sy1;
    cin >> sx2 >> sy2;
    int step1 = bfs(sx1, sy1);
    int step2 = bfs(sx2, sy2);
    cout << step1 << endl
         << step2 << endl;
    return 0;
}