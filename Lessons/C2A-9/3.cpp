// 幂取模
#include <iostream>
using namespace std;

int main() {
    int a, b, m;
    cin >> a >> b >> m;
    long long result = 1;
    for (int i = 1; i <= b; i++)
    {
        result = result * a % m;
    }
    cout << result << endl;
    return 0;
}