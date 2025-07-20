// 数字题目
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    int sum, minNum, index;
    for (int i = 0; i < 3; i++)
    {
        sum = arr[0] + arr[1] + arr[2];
        minNum = min(min(arr[0], arr[1]), arr[2]);
        for (index = 0; index < 3; index++)
        {
            if (arr[index] == minNum)
            {
                break;
            }
        }
        arr[index] = sum - minNum;
    }

    int maxNum = max(max(arr[0], arr[1]), arr[2]);
    cout << maxNum << endl;
    return 0;
}