// 括号匹配
#include <iostream>
#include <stack>
#include <string>
using namespace std;

string s;
stack<char> st;
int flag = 0;

int main() {
    cin >> s;
    int len = s.size();
    for (int i = 0; i < len; i++) {
        if (s[i] == '(') {
            st.push(s[i]);
        } else {
            if (st.empty() == false) {
                st.pop();
            } else {
                flag = 1;
                break;
            }
        }
    }

    if (st.empty() == false || flag == 1) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;
}