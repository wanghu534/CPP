#include <iostream>
using namespace std;

void func(int n)
{
    bool flag;
    if (n % 10 == 0)
    {
        flag = true;
    }
    while (n > 0)
    {
        if (n % 10 != 0)
        {
            flag = false;
        }
        if (flag)
        {
            n /= 10;
            continue;
        }
        cout << n % 10;
        n /= 10;
    }
}

int main() {
    int x;
    cin >> x;
    func(x);
    return 0;
}