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
        a[i + n] = x;
        dp[i][i] = 0;
        dp[i + n][i + n] = 0;
    }

    for (int i = 1; i <= 2 * n; i++)
        sum[i] = sum[i - 1] + a[i];
    for (int len = 2; len <=  n; len++) {
        for (int i = 1; i <= 2 * n; i++) {
            int j = i + len - 1;
            if (j > 2 * n)
                break;
            for (int k = i; k < j; k++) {
                int cost = sum[k] - sum[i - 1] + sum[j] - sum[k];
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[k + 1][j] + cost);
            }
        }
    }

    int imin = 0x3f3f3f3f;
    for (int i = 1; i <= n; i++)
        imin = min(imin, dp[i][i + n - 1]);
    cout << imin << endl;
    return 0;
}