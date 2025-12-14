#include <iostream>
using namespace std;

int a[15];
int n, result = 0;

void dg(int deep) {
    if (deep > n) {
        result++;
        return ;
    }
    for (int i = 1; i <= 3; i++) {
        a[deep] = i;
        dg(deep + 1);
    }
}

int main() {
    cin >> n;
    dg(1);
    cout << result;
    return 0;
}