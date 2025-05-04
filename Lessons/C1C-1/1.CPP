#include <iostream>
using namespace std;

int a[5][5];
int main() {
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            cin >> a[i][j];
        }
    }

    int m, n;
    cin >> m >> n;

    for (int i = 0; i <= 4; i++)
    {
        swap(a[m-1][i], a[n-1][i]);
    }

    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= 4; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}