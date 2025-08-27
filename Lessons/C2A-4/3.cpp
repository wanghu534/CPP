// 高精度乘整数
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
    lc = la + lb;

    for (int i = 0; i < la; i++) {
        A[i] = a[la - i - 1] - '0';
    }
    for (int i = 0; i < lb; i++) {
        B[i] = b[lb - i - 1] - '0';
    }

    for (int i = 0; i < la; i++) {
        for (int j = 0; j < lb; j++) {
            C[i + j] += A[i] * B[j];
            C[i + j + 1] += C[i + j] / 10;
            C[i + j] %= 10;
        }
    }

    while (C[lc - 1] == 0 && lc > 1) {
        lc--;
    }

    for (int i = lc - 1; i >= 0; i--) {
        cout << C[i];
    }
    return 0;
}