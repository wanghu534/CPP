// 素数判定
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << "NO";
        return 0;
    }

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}