// 队列的基本操作
#include <iostream>
#include <string>
using namespace std;

int n, x;
string op;
int a[100005];
int l = 0, r = -1;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> op;
        if (op == "push") {
            cin >> x;
            r++;
            a[r] = x;
        } else if (op == "pop") {
            if (l <= r) {
                l++;
            }
        } else if (op == "front") {
            if (l > r) {
                cout << "empty" << endl;
            } else {
                cout << a[l] << endl;
            }
        } else if (op == "back") {
            if (l > r) {
                cout << "empty" << endl;
            } else {
                cout << a[r] << endl;
            }
        } else if (op == "size") {
            cout << r - l + 1 << endl;
        }
    }

    return 0;
}