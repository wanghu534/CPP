#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int hour = c - a;
    int minute = d - b;
    if (minute < 0) {
        minute += 60;
        hour--;
    }
    cout << hour << " " << minute << endl;
    return 0;
}