#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[30][30] = {0};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == 0)
            {
                arr[i][j] = 1;
                continue;
            }
            if (i != 0)
                arr[i][j] = arr[i-1][j-1]+arr[i-1][j];
        }   
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] != 0)
                cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}