#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n+100][m+100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    long long sum = 0;
    int i = 0, j = 0;
    for (int j = 0; j < m-1; j++)
    {
        sum += arr[i][j];
    }
    j = m-1;
    for (int i = 0; i < n-1; i++)
    {
        sum += arr[i][j];
    }
    i = n-1;
    for (int j = n-1; j > 0; j--)
    {
        sum += arr[i][j]; 
    }
    j = 0;
    for (int i = n-1; i > 0; i--)
    {
        sum += arr[i][j];
    }
    cout << sum;
    return 0;
}