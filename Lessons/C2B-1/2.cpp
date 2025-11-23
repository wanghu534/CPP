// 栈的序列
#include <iostream>
#include <stack>
using namespace std;

int n, in[100005], out[100005];
stack<int> st;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> in[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> out[i];
    }

    st.push(in[0]);
    int loc = 1;

    for (int i = 0; i < n; i++) {
        while (st.top() != out[i] && loc <= n) {
            st.push(in[loc]);
            loc++;
        }
        if (st.top() == out[i]) {
            st.pop();
        } else {
            break;
        }
    }

    if (st.empty()) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}