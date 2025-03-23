#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    char ch;
    int n;
    double square;
    cin >> ch >> n;
    switch (ch)
    {
    case 's':
        square = n*n;
        break;
    case 't':
        square = double(n*n)/2;
        break;
    case 'c':
        square = 3.14*n*n;
        break;
    }
    if (ch == 's')
        cout << (int)square;
    else
    {
        cout << fixed << setprecision(1);
        cout << square << endl;
    }
    return 0;
}