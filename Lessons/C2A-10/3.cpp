// 肥成左边的喵
#include <algorithm>
#include <iostream>
using namespace std;

int arr[100005];

int find(int x, int l, int r) {
    int maxN = -2e9;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] < x) {
            maxN = max(arr[mid], maxN);
            l = mid + 1;
        } else if (arr[mid] >= x) {
            r = mid - 1;
        }
    }
    if (maxN == -2e9) {
        return 0;
    } else {
        return maxN;
    }
}

int main() {
    int n, t;
    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < t; i++) {
        int x;
        cin >> x;
        cout << find(x, 0, n-1) << endl;
    }
    return 0;
}