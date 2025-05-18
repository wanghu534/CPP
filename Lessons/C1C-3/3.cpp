#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int a[m][n];
    int b[n][m];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int k = 0;
    for (int i = m-1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            b[j][k] = a[i][j];
        }
        k++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}