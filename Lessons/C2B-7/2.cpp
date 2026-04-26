#include <iostream>
using namespace std;

int n, m, t, x, a, b;
int mp[1005][1005];

int main() {
    cin >> n >> m >> t;
    for (int i = 1; i <= m; i++) {
        cin >> a >> b;
        mp[a][b]++;
    }

    for (int i = 1; i <= t; i++)
    {
        cin >> x;
        int sumx = 0, sumy = 0;
        for (int j = 1; j <= n; j++)
        {
            sumx += mp[x][j];
            sumy += mp[j][x];
        }
        cout << sumx << " " << sumy << endl;
    }
    return 0;
}