#include <iostream>
#include <algorithm>
using namespace std;

int a[1001];
int dpY[1001];
int dpN[1001];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++) {
        dpY[i] = dpN[i-1] + a[i];
        dpN[i] = max(dpY[i-1], dpN[i-1]);
    }
    cout << max(dpY[n], dpN[n]);
    return 0;
}