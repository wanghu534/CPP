#include <iostream>
using namespace std;

int a[10];

void todo() {
    for (int i = 1; i <= 10; i++) {
        cout << a[i];
    }
    cout << endl;
}

void dg(int deep) {
    if (deep > 10) {
        todo();
        return;
    }
    for (int i = 1; i <= 3; i++) {
        a[deep] = i;
        dg(deep + 1);
    }
}

int main() {
    dg(1);
    return 0;
}