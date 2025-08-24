// 多位数减一位数
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
string a, b;
int A[100000], B[100000], C[100000];
int la, lb, lc;

bool cmp(string a, string b)
{
    if (a.size() != b.size())
        return a.size() > b.size();
    return a >= b;
}


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

    if (!cmp(a, b))
    {
        swap(A, B);
        cout << '-';
    }

    for (int i = 0; i < lc; i++)
    {
        if (A[i] < B[i])
        {
            A[i] += 10;
            A[i+1]--;
        }
        C[i] = A[i] - B[i];
    }

    while (C[lc - 1] == 0 && lc > 1)
    {
        lc--;
    }
    for (int i = lc - 1; i >= 0; i--)
    {
        cout << C[i];
    }
    return 0;
}