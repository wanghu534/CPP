// 最大公约数
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int r, a, b, GCD;
    cin >> a >> b;
    int num1 = a, num2 = b;
    while (num1 % num2 != 0)
    {
        r = num1 % num2;
        num1 = num2;
        num2 = r;
    }
    GCD = num2;
    cout << GCD << endl;
    return 0;
}