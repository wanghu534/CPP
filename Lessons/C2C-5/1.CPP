#include <iostream>
using namespace std;

int dp[11][11];

int main() {
    int n, m;
    cin >> n >> m;
    
    dp[1][1] = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++) {
            dp[i][j] += dp[i - 1][j] + dp[i][j - 1];
            // cout << dp[i][j] << " ";
        }
        // cout << endl;
    }

    cout << dp[n][m];
    return 0;
}