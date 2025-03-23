#include <iostream>
using namespace std;
int main() {
    int t, n, m, result;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n >> m;
        for (result = 1; result < m*n; result++)
        {
            if (result % n == 0 && result % m == 0)
                break;
        }
        cout << result << endl;
    }
    return 0;
}