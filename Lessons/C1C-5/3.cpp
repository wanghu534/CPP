#include <iostream>
using namespace std;

int func(int n)
{
    int result = 0;
    for (int i = 2; i <= n; i++)
    {
        bool flag = true;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0 && j != 1 && i != j)
            {
                flag = false;
            }
            // cout << i << " " << j << " " << flag << endl;
        }
        if (flag)
        {
            result++;
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    cout << func(n);
    return 0;
}