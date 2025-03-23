#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool result = 0.7*(a+b) > 0.5*c;
    if (result)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}