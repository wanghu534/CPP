// 校园舞会
#include <iostream>
using namespace std;

int n, d[20][20], answer[20];
int vis[20];
int temp[20], maxN = INT_MIN;

void todo() {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += d[i][answer[i]];
    }
    if (sum > maxN) {
        maxN = sum;
        for (int i = 1; i <= n; i++) {
            temp[i] = answer[i];
        }
    }
}

void dg(int deep) {
    if (deep > n) {
        if (deep > n) {
            todo();
            return;
        }
    }
    for (int i = 1; i <= n; i++) {
        if (vis[i] == 0) {
            answer[deep] = i;
            vis[i] = 1;
            dg(deep + 1);
            vis[i] = 0;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> d[i][j];
        }
    }
    dg(1);
    cout << maxN << endl;
    for (int i = 1; i <= n; i++) {
        cout << temp[i] << " ";
    }
    return 0;
}