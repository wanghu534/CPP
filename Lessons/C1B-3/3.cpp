#include <iostream>
using namespace std;
int main() {
    int n, x;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        bool flag = true;
        cin >> x;
        for (int j = 1; j <= x; j++)
        {
            if (x % j == 0 && j != 1 && j != x || x == 1)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    return 0;
}