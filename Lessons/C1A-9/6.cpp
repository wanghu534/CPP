#include<iostream>
using namespace std;

int main()
{
	double r, m, y;
    int year;
	cin >> r >> m >> y;

    while (m <= y)
    {
        m += m*r;
        year++;
    }
    cout << year;
    return 0;
}