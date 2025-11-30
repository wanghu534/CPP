// 办理业务
#include <iostream>
#include <queue>
#include <string>
using namespace std;

int n;
string x;
char op;
queue<string> q;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> op;
        if (op == 'I') {
            cin >> x;
            q.push(x);
        } else if (op == 'O') {
            if (q.empty()) {
                cout << "None" << endl;
            } else {
                cout << q.front() << endl;
                q.pop();
            }
        }
    }
    return 0;
}