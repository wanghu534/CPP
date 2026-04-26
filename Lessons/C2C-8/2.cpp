#include <algorithm>
#include <iostream>

using namespace std;

int dp[2001][2001];

int main() {
    int n, V;
    cin >> n >> V;

    for (int i = 1; i <= n; i++) {
        int w, v;
        cin >> w >> v;
        for (int j = 1; j <= V; j++) {
            dp[i][j] = dp[i - 1][j];
            if (j >= v) {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - v] + w);
            }
        }
    }
    cout << dp[n][V] << endl;
    return 0;
}
