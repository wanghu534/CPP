#include <iostream>
#include <algorithm>
using namespace std;

int a[1001];
int dp[1001];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        dp[i] += 1;
        for (int j = 1; j < i; j++)
        {
            if (a[j] < a[i])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }

    }
    int maxN = 0;
    for (int i = 1; i <= n; i++)
    {
        if (dp[i] > maxN)
        {
            maxN = dp[i];
        }
    }
    cout << maxN;
    return 0;
}