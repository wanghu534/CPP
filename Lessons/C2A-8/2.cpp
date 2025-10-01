// 最小公倍数
#include <iostream>
using namespace std;

int main() {
    long long r, a, b, GCD, LCM;
    cin >> a >> b;
    long long num1 = a, num2 = b;

    while (num1 % num2 != 0) {
        r = num1 % num2;
        num1 = num2;
        num2 = r;
    }
    GCD = num2;

    LCM = a * b / GCD;
    cout << LCM;
    return 0;
}