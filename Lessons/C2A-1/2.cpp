// 暑假作业
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    double avg = sum/double(n);
    
    int b[n] = {0};
    for (int i = 0; i < n; i++)
    {
        int num = 0;
        if (arr[i] < avg)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[j] == arr[i])
                {
                    num++;
                }
            }
            if (num == 1)
            {
                b[i] = arr[i];
            }
        }
    }

    int maxNum = 0;
    for (int i = 0; i < n; i++)
    {
        if (b[i] > maxNum)
        {
            maxNum = b[i];
        }
    }
    cout << maxNum;
    return 0;
}