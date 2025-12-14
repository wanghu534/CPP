#include <iostream>
using namespace std;

int a[15], n, b[15], sum;

void todo() {
    sum = 0;
    for (int i = 1; i <= n; i++) {
        cout << b[i] << " ";
        if (b[i] == 1) {
            sum += a[i-1];
        }
    }
    cout << sum << endl;
}

void dg(int deep) {
    if (deep > n) {
        todo();
        return;
    }
    for (int i = 0; i <= 1; i++) {
        b[deep] = i;
        dg(deep + 1);
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    dg(1);
    return 0;
}