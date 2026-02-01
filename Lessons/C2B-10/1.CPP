// 深搜的题
#include <iostream>
using namespace std;

int mp[15][15];
int vis[15][15];
int ans = 0;
int num[15];

void todo() {
    int sum = 0;
    for (int i = 9; i >= 1; i--) {
        sum = sum + mp[i][num[i]];
    }

    if (sum > 0) {
        ans++;
    }
}

void dfs(int deep) {
    if (deep < 1) {
        todo();
        return;
    }
    for (int i = 1; i <= deep; i++) {
        if (vis[deep][i] == 0) {
            vis[deep][i] = 1;
            num[deep] = i;
            dfs(deep - 1);
            vis[deep][i] = 0;
        }
    }
}

int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> mp[i][j];
        }
    }
    dfs(9);
    cout << ans << endl;
    return 0;
}