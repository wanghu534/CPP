// 晒衣服
#include <algorithm>
#include <iostream>
using namespace std;

int n, a, b;
int w[500005];

bool check(int x) {
    int time = 0;
    for (int i = 1; i <= n; i++) {
        int remain = w[i] - x * a;
        if (remain > 0) {
            time += remain / b + (remain % b > 0 ? 1 : 0);
        }
    }
    if (time > x)
        return false;
    else
        return true;
}

int find(int l, int r) {
    int minN = 500000;
    while (l < r) {
        int mid = (l + r) / 2;
        if (check(mid)) {
            r = mid - 1;
            minN = min(mid, minN);
        } else {
            l = mid + 1;
        }
    }
    return minN;
}


int main() {
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++) {
        cin >> w[i];
    }

    cout << find(1, 500000);
    return 0;
}