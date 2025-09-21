#include <algorithm>
#include <iostream>
using namespace std;

int a[1000010];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    for (int i = n - 1; i >= 1; i--) {
        if (a[i - 2] + a[i - 1] > a[i]) {
            cout << a[i - 2] + a[i - 1] + a[i];
            return 0;
        }
    }
    cout << 0;
    return 0;
}