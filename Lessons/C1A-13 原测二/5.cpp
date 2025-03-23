#include <iostream>
using namespace std;
int main() {
    int n, m, bawanglong, sanjiaolong;
    cin >> n >> m;

    if (n*4 >= m)
    {   
        bawanglong = 2 * n - m / 2;
        sanjiaolong =  m / 2 - n;
    }
    else
    {
        cout << "input error";
        return 0;
    }

    if (bawanglong >= 0 && sanjiaolong >= 0 && sanjiaolong*4 + bawanglong*2 == m && m%2 == 0)
    {
        if (bawanglong == sanjiaolong)
            cout << "all die";
        else if (bawanglong > sanjiaolong)
            cout << "BWL";
        else if (sanjiaolong > bawanglong)
            cout << "SJL";
    }
    else
    {
        cout << "input error";
        return 0;
    }
    return 0;
}