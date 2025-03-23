#include <iostream>
#include <cstring>
using namespace std;

char a[520];
char b[520];
int main()
{
    double n, sum = 0;
    cin >> n >> a >> b;
    for (int i = 0; i <= strlen(a) - 1; i++)
    {
        if (a[i] == b[i])
            sum++;
    }

    if (sum / strlen(a) >= n)
        cout << "yes";
    else
        cout << "no";
    return 0;
}