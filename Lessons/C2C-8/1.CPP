#include <iostream>
using namespace std;

int dp[1001];

int main() {
    int L;
    cin >> L;
    for (int i = 1; i <= L; i++)
        cin >> dp[i];

    int x, k;
    cin >> x >> k;

    for (int i = 1; i <= L; i++) {
        if (i >= x && dp[i - x] != -1)
            dp[i] = max(dp[i], dp[i - x] + k);
    }

    for (int i = 1; i <= L; i++)
        cout << dp[i] << " ";
    return 0;
}