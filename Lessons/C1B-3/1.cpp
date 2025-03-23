#include <iostream>
using namespace std;
int main() {
    int n, flag;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        flag = true;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0 && j != 1 && j != i)
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << i << endl;
        }
    }
    return 0;
}