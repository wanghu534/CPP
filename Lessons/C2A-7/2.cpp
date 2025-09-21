// 好学生好难
#include <iostream>
#include <algorithm>
using namespace std;

struct Activity
{
    int start;
    int end;
};

Activity a[1010];

bool cmp(Activity a1, Activity b1)
{
    return a1.end < b1.end;
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].start >> a[i].end;
    }

    sort(a+1, a+n+1, cmp);
    for (int i = 1; i <= m; i++)
    {
        int x;
        cin >> x;
        int cnt = 0, time = 0, j = 1;
        while (cnt < x)
        {
            if (time < a[j].start)
            {
                cnt++;
                time = a[j].end;
            }
            j++;
        }
        cout << time << endl;
    }
    return 0;
}