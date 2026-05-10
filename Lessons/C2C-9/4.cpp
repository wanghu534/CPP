#include <iostream>
#include <cstring>
using namespace std;

int n, dp[101][101];
string s;

int main() {
    cin >> s;
    n = s.size();
    for (int len = 2; len <= n; len++) {
        for (int left = 0; left + len - 1 < n; left++) {
            int right = left + len - 1;
            if (s[left] == '(' && s[right] == ')' || s[left] == '[' && s[right] == ']')
                dp[left][right] = dp[left + 1][right - 1] + 2;
            for (int k = left; k < right; k++) {
                dp[left][right] = max(dp[left][right], dp[left][k] + dp[k + 1][right]);
            }
        }    
    }
    cout << dp[0][n - 1] << endl;
    return 0;
}