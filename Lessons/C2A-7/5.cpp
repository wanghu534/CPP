#include <algorithm>
#include <iostream>
using namespace std;

struct Activity {
    int start, end;
} act[1000000];

bool cmp(Activity a, Activity b) {
    return a.end < b.end;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> act[i].start >> act[i].end;
    }
    sort(act, act + n, cmp);
    int cnt = 0, time = 0;
    for (int i = 0; i < n; i++) {
        if (time <= act[i].start) {
            cnt++;
            time = act[i].end;
        }
    }
    cout << cnt;
    return 0;
}