// 肥宅找元素
#include <iostream>
using namespace std;

int arr[100005];

bool find(int x, int l, int r) {
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] > x) {
            r = mid - 1;
        } else if (arr[mid] < x) {
            l = mid + 1;
        } else {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        if (find(x, 0, n - 1)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}