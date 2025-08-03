// 十进制转二进制
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long n1 = 0;
    long long k = 1;
    while (n > 0)
    {
        n1 += (n % 2) * k;
        n /= 2;
        k *= 10;
    }
    cout << n1;
    return 0;
}