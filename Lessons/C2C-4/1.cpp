#include <iostream>
using namespace std;

int a[101][101];
int b[101][101];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> a[i][j];
            int maxNum = -1, index = j - 1;
            for (int k = j - 1; k <= j; k++) {
                if (a[i - 1][k] > maxNum) {
                    maxNum = a[i - 1][k];
                    index = k;
                }
            }
            b[i][j] = b[i - 1][index] + a[i][j];
            // cout << b[i][j] << endl;
        }
    }

    int maxNum = 0;
    for (int i = 1; i <= n; i++) {
        if (b[n][i] > maxNum)
            maxNum = b[n][i];
    }

    cout << maxNum << endl;

    return 0;
}