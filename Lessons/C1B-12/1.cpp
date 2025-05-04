#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 0;
        return 0;
    }

    int i = 0;
    while (n)
    {
        if (n%10 != 0 || i > 0)
            cout << n%10;
        n /= 10;
        i++;
    }
    return 0;
}