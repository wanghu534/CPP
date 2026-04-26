#include <iostream>
using namespace std;

void reverseNum(long long x) {
    if (x < 10) {
        cout << x;
        return;
    } else {
        cout << x % 10;
        reverseNum(x / 10);
    }
}

int main() {
    long long x;
    cin >> x;
    reverseNum(x);
    return 0;
}