// 肥成的朋友
#include <algorithm>
#include <iostream>
using namespace std;

int a[100005];

int twoFindL(int x, int l, int r) {
    int answer = 2e9;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] >= x) {
            answer = min(answer, mid);
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    if (answer != 2e9) {
        return answer;
    } else {
        return 0;
    }
}

int twoFindR(int x, int l, int r) {
    int answer = -2e9;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a[mid] <= x) {
            answer = max(answer, mid);
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    if (answer != -2e9) {
        return answer;
    } else {
        return 0;
    }
}

int main() {
    int n, t;
    cin >> n >> t;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= t; i++) {
        int l, r;
        cin >> l >> r;
        int L = twoFindL(l, 1, n);
        int R = twoFindR(r, 1, n);
        cout << R - L + 1 << endl;
    }
    return 0;
}