#include <iostream>
using namespace std;

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

bool primeNumber(int n)
{
    bool flag = true;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && i != 1 && i != n)
        {
            flag = false;
        }
    }
    if (n == 1)
    {
        flag = false;
    }
    if (flag)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main() {
    int n;
    cin >> n;
    int reversedNum = reverse(n);
    bool result = primeNumber(reversedNum);
    if (result)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}