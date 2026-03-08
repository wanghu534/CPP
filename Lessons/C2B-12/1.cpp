#include <iostream>
#include <queue>
using namespace std;

queue<int> q;
int n;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }
    int num1, num2;
    while (q.size() != 1) {
        num1 = q.front();
        q.pop();
        num2 = q.front();
        q.pop();
        q.push(num1 + num2);
        cout << num1 + num2 << ' ';
    }
    return 0;
}