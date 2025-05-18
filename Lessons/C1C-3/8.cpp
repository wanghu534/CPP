#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[20][20] = {0};

    int temp = 1, i = 1, j = 1;
    for (int q = 1; q <= n; q += 2)
    {
        while (j <= q && i >= 1)
        {
            a[i--][j++] = temp++;
        }
        i++;
        if (j > n)
        {
            break;
        }
        while (j >= 1 && i <= q+1)
        {
            a[i++][j--] = temp++;
        }
        j++;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n ; j++)
        {
            if (a[i][j] != 0)
            {
                printf("%-5d", a[i][j]);
            }
            
        }
        cout << endl;
    }
    return 0;
}