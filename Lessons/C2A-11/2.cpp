// 抄多少页
#include <iostream>
using namespace std;
int n, k;
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
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < 1000000; i++) {
        if (check(i) == 1)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}