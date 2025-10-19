// 取余运算
#include <iostream>
using namespace std;

int main() {
    long long a, b, m = 10007;
    cin >> a >> b;
    cout << (a % m + b % m) % m << endl
         << (a % m) * (b % m) % m << endl;
    return 0;
}