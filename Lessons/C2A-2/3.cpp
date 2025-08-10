// 最大子段和一
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long sum, maxSum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            if (sum > maxSum)
            {
                maxSum = sum;
            }
        }
    }
    cout << maxSum;
    return 0;
}