// 朝着最高分努力
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    int maxNum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > maxNum)
        {
            maxNum = arr[i];
        }
    }

    int maxNumIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == maxNum)
        {
            maxNumIndex = i;
            break;
        }
    }

    cout << maxNumIndex+1 << endl;
    for (int i = 0; i < n; i++)
    {
        cout << maxNum-arr[i] << ' ';
    }
    return 0;
}