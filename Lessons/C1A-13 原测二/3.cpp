#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;

    if (a < 85)
    {
        cout << "out";
        return 0;
    }

    if (b < 103)
        cout << "appointment";
    else
        cout << "yaoyiyao";
    return 0;
}