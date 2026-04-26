#include <iostream>
#include <algorithm>
using namespace std;

int a[100001];
int dp[100001];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) 
        cin >> a[i];
    
    int iMax= 0;
    for (int i = 1; i <= n; i++) {
        dp[i] = max(dp[i - 1], 0) + a[i];
        iMax = max(iMax, dp[i]);
    }

    cout << iMax << endl;
    return 0;
}