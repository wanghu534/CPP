// 程序员输入问题
#include <iostream>
#include <stack>
#include <string>
using namespace std;

stack<char> s;
stack<char> s1;

int main() {
    string x;
    getline(cin, x);
    for (int i = 0; i < x.size(); i++) {
        if (x[i] == '#') {
            s.pop();
        } else if (x[i] == '@') {
            while (!s.empty()) {
                s.pop();
            }
        } else {
            s.push(x[i]);
        }
    }

    while (!s.empty()) {
        s1.push(s.top());
        s.pop();
    }

    while (!s1.empty()) {
        cout << s1.top();
        s1.pop();
    }
    return 0;
}