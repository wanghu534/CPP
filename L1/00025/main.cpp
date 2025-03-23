#include<iostream>
#include<iomanip>
using namespace std;
int main() 
{
    double n;
    cin >> n;
    if (n >=58)
        n -= 5;
    else if (n >= 28 && n < 58)
        ;
    else
        n += 10;
    cout << fixed << setprecision(2);
    cout << n << endl;
    return 0;
}