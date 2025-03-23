#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int m, n;
    cin >> m >> n;

    if ((m+n)%2 == 0)
        cout << 100+(m+n)/2 << endl;
    else
        cout << 100+max(m, n) << endl;
    return 0;
}