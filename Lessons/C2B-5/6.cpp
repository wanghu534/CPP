#include <iostream>
using namespace std;

int a[15], n;

void todo() {
    for (int i = 1; i <= n; i++) {
        cout << a[i];
    }
    cout << endl;
}

void dg(int deep) {
    if (deep > n) {
        todo();
        return;
    }
    for (int i = 1; i <= 4; i++) {
        if (i == a[deep-1]) {
            continue;
        }
        a[deep] = i;
        dg(deep + 1);
    }
}

int main() {
    cin >> n;
    dg(1);
    return 0;
}