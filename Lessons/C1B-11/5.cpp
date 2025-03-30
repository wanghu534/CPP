// 序列中整数去重
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n+1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                int temp1 = a[j];
                int temp2 = a[i];
                a[i] = temp1;
                a[j] = temp2;
            }
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << ' ';
    // }

    bool flag;
    for (int i = 0; i < n; i++)
    {
        flag = false;
        if (i == 0)
        {
            cout << a[i] << ' ';
        }
        else{
            for (int j = 0; j < i; j++)
            {
                if (a[j] == a[i])
                    flag = true;
            }
            if (flag)
            {
                continue;
            }
            else
                cout << a[i] << ' ';
        }
    }

    return 0;
}