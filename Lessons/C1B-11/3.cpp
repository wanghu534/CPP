// 数列下标
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n+10];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool flag;
    for (int i = 0; i < n; i++)
    {
        flag = false;
        for (int j = i+1; j < n; j++)
        {
            if (a[j] > a[i])
            {
                cout << j+1 << ' ';
                flag = true;
                break;
            }
        }
        if (flag == false)
            cout << 0 << ' ';
    }
    return 0;
}