// 对n的阶乘进行质因数分解
#include <cmath>
#include <iostream>
using namespace std;

int arr[10005];

void devide(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                arr[i]++;
                n /= i;
            }
        }
    }
    if (n > 1)
    {
        arr[n]++;
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        devide(i);
        
    }
    for (int i = 2; i <= 10000; i++)
    {
        if (arr[i] != 0)
        {
            cout << i << " " << arr[i] << endl;
        }
    }
    return 0;
}