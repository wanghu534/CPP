// 取模运算
#include <iostream>
using namespace std;

int main() {
    long long n, a;
    int m = 1e9 + 7;
    cin >> n >> a;
    long long result = ((n % m) * (a % m)) % m;
    cout << result << endl;
    return 0;
}