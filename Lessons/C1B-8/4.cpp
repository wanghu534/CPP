#include <iostream>
#include <cstring>
using namespace std;

char a[120];
int main()
{
    int sum = 0;
    cin >> a;
    for (int i = 0; i <= strlen(a) - 1; i++)
    {
        switch (a[i])
        {
        case 'a':;
        case 'e':;
        case 'i':;
        case 'o':;
        case 'u':
            sum++;
        }
    }
    cout << sum;
    return 0;
}