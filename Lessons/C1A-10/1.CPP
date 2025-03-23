#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double r, m;
    int y;
    cin >> r >> m >> y;
    r *= 0.01;
    for (int i = 1; i <= y; i++)
    {
        m *= (1 + r);
    }
    cout << (long long)floor(m) << endl;
    return 0;
}