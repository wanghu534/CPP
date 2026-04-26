#include <iostream>
using namespace std;

int dp[55][1001];
int v[55], w[55];

int main() {
    int n, L;
    cin >> n >> L;

    for (int i = 1; i <= n; i++)
        cin >> v[i] >> w[i];

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= L; j++) {
            dp[i][j] = dp[i - 1][j];
            if (j == v[i])
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - v[i]] + w[i]);
            else if (j > v[i] && dp[i - 1][j - v[i]] > 0)
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - v[i]] + w[i]);
        }
    }

    for (int j = 1; j <= L; j++) {
        if (dp[n][j] == 0)
            dp[n][j] = -1;
        cout << dp[n][j] << " ";
    }
}