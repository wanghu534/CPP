// 肥宅学认数
#include <iostream>
#include <queue>
using namespace std;

int m, n, x;
queue<int> q;
int flag[1005];
int answer = 0;

int main() {
    cin >> m >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (flag[x] == 0) {
            answer++;
            flag[x] = 1;
            if (q.size() == m) {
                flag[q.front()] = 0;
                q.pop();
            }
            q.push(x);
        }
    }

    cout << answer;
    return 0;
}