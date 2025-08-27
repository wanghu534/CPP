// 高精度除以整数
#include <cstring>
#include <iostream>
using namespace std;

int A[100000], C[100000];

int main() {
    string a;
    int b;
    cin >> a >> b;
    int la = a.size();
    int lc = la;

    for (int i = 0; i < la; i++)
    {
        A[i] = a[la - i - 1] - '0';
    }

    long long r = 0;
    for (int i = lc - 1; i >= 0; i--)
    {
        r = r * 10 + A[i];
        C[i] = r / b;
        r %= b;
    }

    while (lc > 1 && C[lc - 1] == 0)
    {
        lc--;
    }

    for (int i = lc - 1; i >= 0; i--)
    {
        cout << C[i];
    }
    cout << " " << r;

    return 0;
}