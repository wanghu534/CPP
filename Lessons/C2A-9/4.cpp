// 快速幂取模
#include <iostream>
using namespace std;

long long quickMod(long long a, long long n, long long m)
{
    long long result = 1;
    while(n)
    {
        if (n % 2 == 1)
        {
            result = result * a % m;
        }
        a = a * a % m;
        n /= 2;
    }
    return result % m;
}

int main() {
    long long  a, b, m;
    cin >> a >> b >> m;
    cout << quickMod(a, b, m) << endl;
    return 0;
}