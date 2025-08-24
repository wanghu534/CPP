// 高精度比较
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int la = a.size(), lb = b.size();
    if (la > lb)
    {
        cout << ">";
    }
    else if (la < lb)
    {
        cout << "<";
    }
    else
    {
        if (a > b)
        {
            cout << ">";
        }
        else if (a < b)
        {
            cout << "<";
        }
        else
        {
            cout << "=";
        }
    }
    return 0;
}