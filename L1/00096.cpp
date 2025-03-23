#include <iostream>
using namespace std;
int main() {
    int n, sum = 0, temp;
    bool flag = false;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        flag = false;
        temp = i;
        while (temp)
        {
            if (temp % 10 == 5)
            {
                flag = true;
                break;
            }
            temp /= 10;
        }
        if (flag && i % 5 == 0)
            sum++;
    }
    cout << sum << endl;
    return 0;
}