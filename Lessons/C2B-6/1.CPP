// 抽奖 - 2 
#include <iostream>
using namespace std;

int a[15], n, flag[15];

void todo() {
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void dg(int deep) {
    if (deep > n) {
        todo();
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (flag[i])
            continue;
        a[deep] = i;
        flag[i] = 1;
        dg(deep + 1);
        flag[i] = 0;
    }
}

int main() {
    cin >> n;
    dg(1);
    return 0;
}