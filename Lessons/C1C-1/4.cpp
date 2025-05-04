#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    int b[n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int maxNum;
    for (int i = 0; i < n; i++) {
        maxNum = arr[i][0];
        for (int j = 1; j < m; j++) {
            if (arr[i][j] > maxNum) {
                maxNum = arr[i][j];
            }
        }
        b[i] = maxNum;
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += b[i];
    }

    cout << sum << endl;
    return 0;
}