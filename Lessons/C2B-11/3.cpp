#include <iostream>
using namespace std;

int n;
string st[15];
int vis[15];
int star[15];
int flag = 0;

void dfs(int deep) {
    int len = st[deep].length();
    if (st[deep][len - 1] == 'M') {
        flag = 1;
        return;
    }
    if (flag == 1) {
        return ;
    }

    for (int i = 1; i <= n; i++) {
        if (vis[i] == 0 && st[deep][len - 1] == st[i][0]) {
            vis[i] = 1;
            dfs(i);
            vis[i] = 0;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> st[i];
        if (st[i][0] == 'B') {
            star[i] = 1;
        }
    }

    for (int i = 1; i <= n; i++) {
        if (star[i] == 1) {
            vis[i] = 1;
            dfs(i);
            vis[i] = 0;
        }
    }
    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}