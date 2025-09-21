#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int cnt[129];
int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        int num = s[i];
        if (num >= 97) {
            cnt[num - 32]++;
        } else {
            cnt[num]++;
        }
    }

    sort(cnt, cnt+128+1);
    int sum = 0;
    int k = 128;
    for (int i = 26; i > 0; i--) {
        sum += i * cnt[k];
        k--;
    }
    cout << sum;
    return 0;
}