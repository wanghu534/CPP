// 抄的完吗
#include <iostream>
using namespace std;
int n, k, t;
int b[1005];

bool check(int x) {
    int cnt = 1;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] + sum <= x) {
            sum += b[i];
        } else {
            cnt++;
            sum = b[i];
        }
        if (cnt > k) {
            return 0;
        }
        if (b[i] > x) {
            return 0;
        }
    }
    return true;
}

int main() {
    cin >> n >> k >> t;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (check(x)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}