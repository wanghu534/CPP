// 肥成抄书
#include <iostream>
using namespace std;
int n, k;
int b[1005];

bool check(int x) {
    int cnt = 1;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] + sum <= x) {
            sum += b[i];
        } else {
            cnt++;
            sum = b[i];
        }
        if (cnt > k) {
            return 0;
        }
        if (b[i] > x) {
            return 0;
        }
    }
    return true;
}

long long find(long long l, long long r)
{
    long long answer = 1e10;
    while (l <= r)
    {
        long long mid = (l + r) / 2;
        if (check(mid))
        {
            answer = mid;
            r = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    return answer;
}

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    cout << find(1, 1e9) << endl;
    return 0;
}