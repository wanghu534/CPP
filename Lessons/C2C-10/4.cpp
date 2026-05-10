#include <iostream>
using namespace std;

int dp[1001][1001];

int main() {

    int n, t;
    cin >> n >> t;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int x;
            cin >> x;
            dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + x;
        }
    }

    for (int i = 0; i < t; i++) {
        int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;
        int sum = dp[a2][b2] - dp[a1-1][b2] - dp[a2][b1-1] + dp[a1-1][b1-1];
        cout << sum << endl;
    }
    return 0;
}
