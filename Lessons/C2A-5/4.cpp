// 肥成学冒泡
#include <algorithm>
#include <iostream>
using namespace std;

int cmp = 0;
int swp = 0;

void bubble_sort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = n; j > i; j--) {
            cmp++;
            if (a[j] < a[j - 1]) {
                swp++;
                swap(a[j], a[j - 1]);
            }
        }
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
    cout << cmp << " " << swp << endl;

    return 0;
}