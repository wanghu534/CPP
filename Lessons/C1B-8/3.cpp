#include <iostream>
#include <cstring>
using namespace std;

char a[1200];
int main()
{
    int sum = 0;
    cin >> a;
    for (int i = 0; i <= strlen(a) - 1; i++)
    {
        if (a[i] >= 48 && a[i] <= 57)
            sum++;
    }
    cout << sum;
    return 0;
}