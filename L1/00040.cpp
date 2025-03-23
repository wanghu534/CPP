#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double x, n; // x: 人口基数 n:年数
    cin >> x >> n;
    for (int i = 0; i < n; i++)
    {
        x += x*0.001;
    }
    cout << setprecision(4) << fixed << x << endl;

    return 0;
}