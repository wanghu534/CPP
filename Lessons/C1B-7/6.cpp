#include <iostream>
#include <cstring>
using namespace std;

char a[40];
int main()
{
    char beforeN;
    char afterN;

    cin >> a >> beforeN >> afterN;
    for (int i = 0; i <= strlen(a) - 1; i++)
    {
        if (a[i] != beforeN)
            cout << a[i];
        else if (a[i] == beforeN)
            cout << afterN;
    }
    // cout << beforeN << ' ' << afterN;
    return 0;
}