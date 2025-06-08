#include <iostream>
using namespace std;

bool isPrime(int n)
{
    bool flag = true;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0 && n != i)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

int reverse(int n)
{
    int reversed = 0;
    while (n > 0)
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int main() {
    int n;
    cin >> n;
    if (isPrime(n))
    {
        cout << reverse(n);
    }
    else
    {
        cout << n;
    }
    return 0;
}