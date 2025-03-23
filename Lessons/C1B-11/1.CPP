// 校门外的树

#include <iostream>
using namespace std;

int a[1100];
int main()
{
    int L, M;
    cin >> L >> M;

    for (int i = 0; i < M; i++)
    {
        int x, y;
        cin >> x >> y;
        for (int j = x - 1; j <= y - 1; j++)
        {
            a[j] = 1;
        }
        // int result = 0;
        // for (int i = 0; i < L; i++)
        // {
        //     if (a[i] == 0)
        //         result++;
        //     // cout << a[i] << endl;
        // }

        // cout << result << endl;
    }

    int result = 0;
    for (int i = 0; i < L; i++)
    {
        if (a[i] == 0)
            result++;
        // cout << a[i] << endl;
    }

    cout << result+1 << endl;
    return 0;
}