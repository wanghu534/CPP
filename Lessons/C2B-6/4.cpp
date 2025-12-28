// 错排问题
#include <iostream>
using namespace std;

int a[15], n, flag[15], sum = 0;

void todo() {
    sum++;
}

void dg(int deep) {
    if (deep > n) {
        todo();
        return;
    }
    for (int i = 1; i <= n; i++) {
        if (flag[i] == 0 && deep != i)
        {
            a[deep] = i;
            flag[i] = 1;
            dg(deep + 1);
            flag[i] = 0;
        }
    }
}

int main() {
    cin >> n;
    dg(1);
    cout << sum;
    return 0;
}