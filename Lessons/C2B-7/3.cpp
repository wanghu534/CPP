#include <iostream>
using namespace std;

int n, m, t, x, a, b;
int mp[1005][1005];

int main() {
    cin >> n >> m >> t;
    for (int i = 1; i <= m; i++) {
        cin >> a >> b;
        mp[a][b] = 1;
        mp[b][a] = 1;
    }

    for (int i = 1; i <= t; i++) {
        cin >> x;
        for (int j = 1; j <= n; j++) {
            if (mp[x][j] == 1)
                cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}