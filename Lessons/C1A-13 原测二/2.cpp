#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int minNum = min(min(a, b), c);
    int maxNum = max(max(a, b), c);
    if (minNum + (a+b+c-minNum-maxNum) > maxNum)
        cout << 1;
    else
        cout << 0;
    return 0;
}