#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxNum = 0, curNum = 1;
    for (int i = 0; i < n; i++)
    {
        if (i >= 1)
        {
            if (arr[i]-1 == arr[i-1])
            {
                curNum++;
            }
            else
            {
                curNum = 1;
            }
        }
        if (curNum > maxNum)
        {
            maxNum = curNum;
        }
        // cout << curNum << endl;
    }
    cout << maxNum;
    return 0;
}