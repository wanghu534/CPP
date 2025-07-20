// 方程的解
#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c, delta, x1, x2;
    cin >> a >> b >> c;
    delta = b * b - 4 * a * c;
    if (delta >= 0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << fixed << setprecision(1);
        if (delta == 0)
        {
            cout << x1;
        }
        else{
            cout << max(x1, x2) << " " << min(x1, x2);
        }
    }
    else if (delta < 0)
    {
        cout << "No answer";
    }
    return 0;
}