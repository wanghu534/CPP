// 不服气的猫
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (i == n - 1)
        {
            cout << -1 << " ";
            continue;
        }

        bool flag = false;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                cout << j + 1 << " ";
                flag = true;
                break;
            }
        }

        if (!flag)
            cout << -1 << " ";

    }
    return 0;
}