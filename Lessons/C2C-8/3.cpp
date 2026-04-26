#include <algorithm>
#include <iostream>

using namespace std;

int dp[2001];

int main() {
    int n, V;
    cin >> n >> V;

    for (int i = 1; i <= n; i++) {
        int w, v;
        cin >> v >> w;
        for (int j = V; j >= v; j--) {
            dp[j] = max(dp[j], dp[j - v] + w);
        }
    }
    cout << dp[V] << endl;
    return 0;
}
