#include <iostream>

using namespace std;
int main() {
    int m, t, changeNum;
    cin >> m >> t;
    int temp;
    for (int i = 1; i <= m; i++)
    {
        temp = i;
        while (temp)
        {
            if (temp % 10 == t)
            {
                changeNum++;
                break;
            }
            temp /= 10;
        }
    }
    cout << m-changeNum << endl;
    return 0;
}