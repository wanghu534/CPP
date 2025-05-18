#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int a[m][n];
    int b[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> b[i][j];
        }
    }

    int sum;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == b[i][j])
            {
                sum++;
            }
        }
    }
    printf("%.2lf", double(sum*100)/(m*n));
    return 0;
}