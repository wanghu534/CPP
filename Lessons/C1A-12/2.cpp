#include<iostream>
using namespace std;
int main()
{
    int x, handIn;
    cin >> x;
    if (x > 5000)
        handIn = 2000;
    else if (x > 3000 && x <= 5000)
        handIn = 1500;
    else if (x > 1000 && x <= 3000)
        handIn = 500;
    else if (x <= 1000)
        handIn = 0;
    cout << x-handIn;
    return 0;
}