#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100][100] = {-1};

    int number = 1, i, j;
    for (int q = 1; q <= (n+1)/2; q++)
    {
        i = q-1, j = q-1;
        for (int j = q-1; j < n-q; j++)
        {
            arr[i][j] = number++;
        }
        j = n-q;
        for (int i = q-1; i < n-q; i++)
        {
            arr[i][j] = number++;
        }
        i = n-q;
        for (int j = n-q; j > q-1; j--)
        {
            arr[i][j] = number++;
        }
        j = q-1;
        for (int i = n-q; i > q-1; i--)
        {
            arr[i][j] = number++;
        }
    }
    if (n % 2 != 0)
    {
        arr[i][j] = number;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%5d", arr[i][j]);
        }
        cout << endl;
    }
    // cout << i << " " << j << endl << number << arr[i][j];
    return 0;
}