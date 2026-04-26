#include <iostream>
using namespace std;

int a[100001];
int b[100001];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        b[i] = a[i] + b[i-1];
    }

    int l, r;
    for (int i = 0; i < m; i++) {
        cin >> l >> r;
        cout << b[r] - b[l - 1] << endl;
    }
    
    return 0;
}