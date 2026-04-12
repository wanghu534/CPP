#include <iostream>
using namespace std;

int a[100001];
int dp[100001];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (i != 1) {
            dp[i] = max(dp[i - 1], dp[i - 2]) + a[i];
        } else {
            dp[i] = a[i];
        }
    }
    cout << dp[n];
    return 0;
}