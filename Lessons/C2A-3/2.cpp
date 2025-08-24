// 高精度加法
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;

int A[100005], B[100005], C[100005];
string a, b;
int la, lb, lc;

int main() {

    cin >> a >> b;
    la = a.size();
    lb = b.size();
    lc = max(la, lb);

    for (int i = 0; i < la; i++) {
        A[i] = a[la - i - 1] - '0';
    }
    for (int i = 0; i < lb; i++) {
        B[i] = b[lb - i - 1] - '0';
    }

    for (int i = 0; i < lc; i++) {
        C[i] += A[i] + B[i];
        C[i + 1] += C[i] / 10;
        C[i] %= 10;
    }

    if (C[lc] != 0) {
        lc++;
    }

    for (int i = lc - 1; i >= 0; i--) {
        cout << C[i];
    }
    return 0;
}