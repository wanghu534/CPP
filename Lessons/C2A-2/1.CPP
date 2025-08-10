//  二进制转十进制
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long x, result = 0;
    cin >> x;

    int k = 0;
    while (x > 0)
    {
        result += x % 10 * pow(2, k);
        x /= 10;
        k++;
    }
    cout << result;
    return 0;
}