// 肥宅的猫条
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;
        int maxNum = 0;
        for (int j = x - 1; j < y; j++)
        {
            if (a[j] > maxNum) {
                maxNum = a[j];
            }
        }
        cout << maxNum << endl;

    }
    return 0;
}