// 买票看喵
#include <iostream>
using namespace std;

int a[1000];

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        switch (x) {
        case 25:
            a[25]++;
            break;
        case 50:
            a[25]--;
            a[50]++;
            break;
        case 100:
            if (a[50] > 0) {
                a[50]--;
                a[25]--;
            } else {
                a[25] -= 3;
            }
            break;
        }
        if (a[25] < 0 || a[50] < 0) {
            break;
        }
        cnt++;
    }
    cout << cnt;
    return 0;
}