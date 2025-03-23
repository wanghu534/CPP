#include <iostream>

using namespace std;
int main() {
    int T, n, cardNum;
    bool flag;
    cin >> T;
    for (int i = 1; i <= T; i++)
    {
        cin >> n;
        flag = false;
        for (int j = 1; j <= n; j++)
        {
            cin >> cardNum;
            if (cardNum == 0)
            {
                flag = true;
            }
        }
        if (flag)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}