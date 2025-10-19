// 质因数个数
#include <cmath>
#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int num = 0;
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0 && isPrime(j))
                num++;
        }
        cout << num << " ";
    }
    return 0;
}