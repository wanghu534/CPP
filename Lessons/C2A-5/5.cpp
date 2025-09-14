// 求中位数左边的数
#include <algorithm>
#include <iostream>
using namespace std;

void bubble_sort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        bool flag = 1;
        for (int j = n; j > i; j--) {
            if (a[j] < a[j - 1]) {
                swap(a[j], a[j - 1]);
                flag = 0;
            }
        }
        if (flag == 1)
            break;
        else
            continue;
    }
}

int a[1000];
int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bubble_sort(a, n - 1);
    cout << a[n/2-1];

    return 0;
}