// 阶乘
#include <iostream>
using namespace std;

long long n;
long long fac(long long n) {
    if (n == 0)
        return 1;
    else
        return n * fac(n - 1);
}

int main() {
    cin >> n;
    cout << fac(n) << endl;
    return 0;
}