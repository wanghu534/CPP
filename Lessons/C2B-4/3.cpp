// 最大公约数
#include <iostream>
using namespace std;

int a, b;
int gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd(b ,  a % b);
}
int main() {
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}