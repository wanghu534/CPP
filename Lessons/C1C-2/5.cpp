#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];
    int b[n+1] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 3)
            {
                b[i]++;
            }
        }
    }

    int maxNum, index;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            maxNum = b[i];
            index = 0;
        }
        else if (b[i] > maxNum)
        {
            maxNum = b[i];
            index = i;
        }
    }

    cout << index+1 << endl;

    return 0;
}