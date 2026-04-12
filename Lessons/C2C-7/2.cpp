#include <iostream>
using namespace std;

int a[2][1001];

int main() {
    int L;
    cin >> L;
    for (int i = 1; i <= L; i++) {
        cin >> a[0][i];
    }

    for (int k = 0; k < 2; k++) {
        int v, w;
        cin >> v >> w;
        for (int i = 1; i <= L; i++) {
            if (i >= v && a[k][i - v] != -1)
                a[k+1][i] = max(a[k][i], w + a[k][i - v]);
            else
                a[k+1][i] = a[k][i];
        }
    }
    for (int i = 1; i <= L; i++)
        cout << a[2][i] << " ";
    return 0;
}