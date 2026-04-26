#include <iostream>
using namespace std;

int dp[1001];

int main() {
    int n, V;
    cin >> n >> V;

    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        int v;
        cin >> v;
        for (int j = 1; j <= V; j++) {
            if (j >= v)
                dp[j] += dp[j - v];
        }
    }
    cout << dp[V];
    return 0;
}