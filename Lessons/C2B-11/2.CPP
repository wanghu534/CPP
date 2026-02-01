#include <iostream>
#include <string>
using namespace std;

int n, m;
char map[105][105]; 
bool vis[105][105]; 

int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void dfs(int x, int y) {
    vis[x][y] = true;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
            if (map[nx][ny] != '0' && !vis[nx][ny]) {
                dfs(nx, ny);
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string line;
        cin >> line;
        for (int j = 0; j < m; j++) {
            map[i][j] = line[j];
        }
    }

    int result = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (map[i][j] != '0' && !vis[i][j]) {
                result++;  
                dfs(i, j); 
            }
        }
    }

    cout << result << endl;

    return 0;
}