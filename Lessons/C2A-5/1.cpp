// 选择排序
#include <algorithm>
#include <iostream>
using namespace std;

void choose_sort(int a[], int L, int R) {
    for (int i = L; i < R; i++) {
        int maxn = i;
        for (int j = i + 1; j <= R; j++) {
            if (a[j] > a[maxn]) {
                maxn = j;
            }
        }
        swap(a[maxn], a[i]);
        // cout << a[i];
    }
}

int a[1000];
int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    choose_sort(a, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}