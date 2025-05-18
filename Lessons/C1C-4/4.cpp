#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    double a[n+100][m+100] = {0};
    double b[n+100][m+100] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }
    
    for (int i = 1; i < n-1; i++)
    {
        for (int j = 1; j < m-1; j++)
        {
            b[i][j] = (a[i-1][j] + a[i+1][j] + a[i][j-1] + a[i][j+1] + a[i][j]) / 5.0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%.0lf ", b[i][j]);
        }
        cout << endl;
    }
    return 0;
}