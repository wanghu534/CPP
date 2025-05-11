#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int result = 0;
    for (int i = 1; i < n-1; i++)
    {
        for (int j = 1; j < n-1; j++)
        {
            int upNum = arr[i-1][j];
            int downNum = arr[i+1][j];
            int leftNum = arr[i][j-1];
            int rightNum = arr[i][j+1];

            if (upNum-arr[i][j] >= 50 && downNum-arr[i][j] >= 50 && leftNum-arr[i][j] >= 50 && rightNum-arr[i][j] >= 50)
                result++;
        }
    }
    cout << result;
    return 0;
}