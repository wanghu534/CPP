#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[20][20];

    int number = 1;
    for (int i = n-1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = number;
            number++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%3d", arr[i][j]);
        }
        cout << endl;
    }
    return 0;
}