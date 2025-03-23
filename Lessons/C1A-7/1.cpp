#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    char userLevel;
    double money;
    cin >> userLevel;
    cin >> money;
    switch (userLevel)
    {
    case 'P':
        money *= 0.7;
        break;
    case 'G':
        money *= 0.8;
        break;
    case 'S':
        money *= 0.9;
        break;
    default:
        money *= 0.95;
        break;
    }
    cout << fixed << setprecision(2);
    cout << money << endl;
    return 0;
}