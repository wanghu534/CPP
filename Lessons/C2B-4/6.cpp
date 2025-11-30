// 多参数递归
#include <iostream>
using namespace std;

int dg(int a, int b)
{
    if (a < 0) return 0;
    else if (b == 1) return 1;
    else return dg(a, b - 1) + dg(a - b, b);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << dg(a, b) << endl;
    return 0;
}