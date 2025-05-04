#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int arr[n][m];
    for (int i = 0; i <= m-1; i++)
    {
        for (int j = 0; j <= n-1; j++)
        {
            cin >> arr[j][i];
        }
    }

    for (int i = 0; i <= n-1; i++)
    {
        for (int j = 0; j <= m-1; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}