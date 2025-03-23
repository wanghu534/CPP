#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int result = 1;
    for (int i = 0; i < n; ++i) {
        result = (result * 2) % 1000;
    }

    if (result < 10) {
        cout << result << endl;
    } else if (result < 100) {
        cout << result << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}
