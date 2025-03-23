#include <iostream>
using namespace std;
int main() {
    int m, k;
    cin >> m >> k;

    bool flag19 = false, flag3 = false;

    if (m % 19 == 0) {
        flag19 = true;
    }

    int sum = 0;
    while (m > 0)
    {
        if (m % 10 == 3)
            sum++;
        m /= 10;
    }
    if (sum == k)
        flag3 = true;

    if (flag19 && flag3)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}