#include <iostream>
using namespace std;

int dp[100001][11];
int a[100001][11];

int main() {
    int n, x, t;
    cin >> n;
    int maxTime = 0;
    for (int i = 1; i <= n; i++) {
        cin >> x >> t;
        a[t][x]++;
        maxTime = max(maxTime, t);
    }
    dp[1][4] = a[1][4];
    dp[1][5] = a[1][5];
    dp[1][6] = a[1][6];
    for (int i = 2; i <= maxTime; i++) {
        for (int j = 0; j <= 10; j++) {
            if (j == 0)
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j + 1]) + a[i][j];
            else if (j == 10)
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1]) + a[i][j];
            else
                dp[i][j] = max(max(dp[i - 1][j], dp[i - 1][j - 1]), dp[i - 1][j + 1]) + a[i][j];
        }
    }

    int number = 0;
    for (int i = 0; i <= 10; i++) {
        number = max(number, dp[maxTime][i]);
    }
    cout << number << endl;
    return 0;
}