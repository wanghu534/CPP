#include <algorithm>
#include <iostream>
using namespace std;

int a[100001];
int dp[100001];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    dp[1] = a[1];
    dp[2] = max(0, dp[1]) + a[2];
    dp[3] = max(dp[2] - a[2], dp[2]) + a[3];
    for (int i = 4; i <= n; i++) {
        dp[i] = max(max(dp[i - 1], dp[i - 2]), dp[i - 3]) + a[i];
    }
    cout << dp[n];
    return 0;
}