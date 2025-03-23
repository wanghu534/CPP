#include <iostream>
using namespace std;
int main() {
    int t, n, m, ans;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n >> m;
        for (int k = min(n, m); k >= 1; k--)
        {
            if (n % k == 0 && m % k == 0)
            {
                ans = k;
                break;
            }
        }
        cout << ans;
    }
    return 0;
}