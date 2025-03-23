#include<iostream>
using namespace std;

int main()
{
    int luck, incentive;
    cin >> luck >> incentive;
    if (luck >= 10 || incentive >= 20)
        cout << 1;
    else
        cout << 0;
    return 0;
}
