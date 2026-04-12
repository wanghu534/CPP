#include <iostream>
using namespace std;

int dp[1001];

int main() {
    int n, m;
    cin >> n >> m;

    int p, a, b;
    int base = 0;

    for (int i = 0; i < n; i++){
        cin >> p >> a >> b;
        base += b;
    
        for (int j = m; j >= p; j--) {
            dp[j] = max(dp[j], dp[j - p] + a - b);
        }
    }
    
    int extra = 0;
    for (int i = 0; i <= m; i++) {
        extra = max(extra, dp[i]);
    }
    cout << base + extra << endl;
    return 0;
}
