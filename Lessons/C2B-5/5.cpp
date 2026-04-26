#include <iostream>
using namespace std;

int a[5], b[15], n, sum;

void todo() {
    sum = 0;
    for (int i = 1; i <= n; i++) {
        cout << b[i] << " ";
        sum += a[b[i]-1];
    }
    cout << sum << endl;
}

void dg(int deep) {
    if (deep > n) {
        todo();
        return;
    }
    for (int i = 1; i <= 4; i++) {
        b[deep] = i;
        dg(deep + 1);
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    dg(1);
    return 0;
}