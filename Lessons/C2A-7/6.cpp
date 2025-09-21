// 拼数字
#include <iostream>
using namespace std;

int main() {
    int n, flag[55] = {0};
    cin >> n;
    if (n > 45) {
        cout << -1;
        return 0;
    }

    while (n != 0) {
        for (int i = 9; i >= 1; i--) {
            if (flag[i] == 1) {
                continue;
            }
            if (i <= n) {
                n -= i;
                flag[i] = 1;
            }
        }
    }

    for (int i = 0; i < 55; i++) {
        if (flag[i] == 1) {
            cout << i;
        }
    }
    return 0;
}