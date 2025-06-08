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

bool isPalindromicNum(int n)
{
    if (n % 10 == 0)
    {
        return false;
    }
    int n1 = n;
    int reversed = 0;
    while (n1 > 0)
    {
        reversed = reversed * 10 + n1 % 10;
        n1 /= 10;
    }
    return n == reversed;
}

int main() {
    int n;
    cin >> n;

    int result = 0;
    for (int i = 11; i <= n; i++)
    {
        if (isPrime(i) && isPalindromicNum(i))
        {
            result++;
        }
    }
    cout << result;
    return 0;
}