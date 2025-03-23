#include <iostream>
#include <string>
using namespace std;

string str;
int main()
{
    int n;
    cin >> n;

    cin >> str;
    int zpl = 0, zsq = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        if (str[i] == 'P')
            zpl++;
        else if (str[i] == 'S')
            zsq++;
    }

    if (zpl > zsq)
        cout << "zpl";
    else if (zpl < zsq)
        cout << "zsq";
    else if (zpl == zsq)
        cout << "Friendship";
    return 0;
}