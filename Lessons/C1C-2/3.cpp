#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        int maxNum = 0, pos = 0;
        for (int j = 0; j < m; j++)
        {
            if (j == 0)
            {
                maxNum = a[i][j];
                pos = j;
            }
            else if (a[i][j] > maxNum)
            {
                maxNum = a[i][j];
                pos = j;
            }
        }
        
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == maxNum)
            {
                break;
            }
            if (a[i][j] < maxNum && a[i][j] != 0)
            {
                sum++;
            }
        }
        cout << pos+1 << " " << sum << endl;
    }
    return 0;
}