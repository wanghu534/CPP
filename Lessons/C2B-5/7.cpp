#include <iostream>
using namespace std;

int a[15], n;

void todo() {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += a[i];
    }
    if (sum % 2 != 0) {
        return;
    }
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
    for (int i = 1; i <= 5; i++) {
        a[deep] = i;
        dg(deep + 1);
    }
}

int main() {
    cin >> n;
    dg(1);
    return 0;
}