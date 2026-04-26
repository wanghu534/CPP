#include <iostream>
#include <algorithm>

using namespace std;

int dp[2001]; 

int main() {
    int n, V;
    cin >> n >> V;

    for (int i = 1; i <= n; i++) {
        int w, v;
        cin >> w >> v;
        for (int j = 1; j <= V; j++) {
            if (v <= j)
                dp[j] = max(dp[j], dp[j-v] + w);
        }
    }

    cout << dp[V] << endl;


    return 0;
}
