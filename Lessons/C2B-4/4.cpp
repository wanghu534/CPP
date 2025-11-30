// 快速幂取模
#include <iostream>
using namespace std;

int mod(long long a, long long b, long long m){
    if (b == 0)
        return 1;
    long long t = mod(a, b / 2, m);
    t = t * t % m;
    if (b % 2 == 1)
        t = t * a % m;
    return t;
}

int main() {
    long long a, b, m;
    cin >> a >> b >> m;
    cout << mod(a, b, m) << endl;
    return 0;
}