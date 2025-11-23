// 栈的基本操作
#include <cstring>
#include <iostream>
using namespace std;

int a[100005];
int n, x;
int l, r;
string op;

int main() {
    cin >> n;
    l = -1;
    r = -1;
    while (n--) {
        cin >> op;
        if (op == "push") {
            cin >> x;
            r++;
            a[r] = x;
        } else if (op == "pop") {
            if (r != l) {
                r--;
            }
        } else if (op == "top") {
            if (r == l) {
                cout << "empty" << endl;
            } else {
                cout << a[r] << endl;
            }
        } else {
            cout << r + 1 << endl;
        }

    }
    return 0;
}