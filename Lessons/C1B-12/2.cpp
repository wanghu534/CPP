#include <iostream>
#include <cstring>
using namespace std;

char a[120];
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        switch (a[0])
        {
            case 'a': ;
            case 'e': ;
            case 'i': ;
            case 'o': ;
            case 'u': 
                for (int j = 0; j <= strlen(a)-1; j++)
                {
                    a[j] -= 32;
                }
        }

        for (int j = 0; j <= strlen(a)-1; j++)
        {
            cout << a[j];
        }
        cout << ' ';

    }
    return 0;
}