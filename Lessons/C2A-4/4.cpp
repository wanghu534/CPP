// N!
#include <cstring>
#include <iostream>
using namespace std;

int res[100000] = {1};
int len = 1;

int main() {
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        int t = 0;
        for (int j = 0; j < len; j++)
        {
            res[j] = res[j] * i + t;
            t = res[j] / 10;
            res[j] %= 10;
        }
        while (t)
        {
            len++;
            res[len-1] = t % 10;
            t /= 10;
        }
    }

    for (int i = len-1; i >= 0; i--)
    {
        cout << res[i];
    }

    return 0;
}