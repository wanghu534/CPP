#include<iostream>
using namespace std;

int main()
{
    bool flag = false;
    int a, b, c, aRemainder, bRemainder, cRemainder, x=2;
    cin >> a >> b >> c;
    while (not flag)
    {
        aRemainder = a % x;
        bRemainder = b % x;
        cRemainder = c % x;
        if (aRemainder == bRemainder and bRemainder == cRemainder)
            flag = true;
        else
            x++;
    }
    cout << x << endl;
    return 0;
}