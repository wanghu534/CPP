#include <cstring>
#include <iostream>
using namespace std;

int a[301];
int dp[301][301];
int sum[301];

int main() {
    int n;
    cin >> n;
    memset(dp, 0x3f, sizeof(dp));

    int x;
    for (int i = 1; i <= n; i++) {
        cin >> x;
        a[i] = x;
        sum[i] = sum[i - 1] + a[i];
        dp[i][i] = 0;
    }

    for (int len = 2; len <= n; len++) {
        for (int i = 1; i <= n; i++) {
            int j = i + len - 1;
            if (j > n)
                break;
            for (int k = i; k < j; k++) {
                int cost = min(sum[k] - sum[i - 1] , sum[j] - sum[k]);
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + cost);
            }
        }
    }

    cout << dp[1][n] << endl;
    return 0;
}