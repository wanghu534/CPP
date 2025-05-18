#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[20][20] = {0};

    int j = 0;
    for (int i = n-1; i >= 0; i--)
    {
        a[i][j] = 1;
        j++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}