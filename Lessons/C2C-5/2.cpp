#include <iostream>
using namespace std;

int a[11][11];
int dp[11][11];

int main() {
    int n, m;
    cin >> n >> m;
    

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }

    dp[1][1] = 1;
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i == 1 && j == 1)
                continue;
            
            dp[i][j] = 0;
            
            if (i > 1 && a[i-1][j] < a[i][j]) {
                dp[i][j] += dp[i-1][j];
            }
            
            if (j > 1 && a[i][j-1] < a[i][j]) {
                dp[i][j] += dp[i][j-1];
            }
        }
    }

    cout << dp[n][m];
    return 0;
}
