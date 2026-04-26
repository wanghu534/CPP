#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int a[100001];
int dp[100001];

int main() {
    int n;
    cin >> n;

    int iMin = INT_MAX;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        dp[i] = dp[i-1] + a[i];
        iMin = min(iMin, dp[i]);
    }

    if (iMin <= 0)
    {
        cout << -iMin + 1;
    }

    return 0;
}