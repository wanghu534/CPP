#include <iostream>
#include <algorithm>
using namespace std;

int a[101][101];
int dp[101][101];

int main() {
    int n, m;
    cin >> n >> m;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }

    dp[1][1] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++) {
            dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + a[i][j];
            // cout << dp[i][j] << " ";
        }
        // cout << endl;
    }

    cout << dp[n][m];
    return 0;
}