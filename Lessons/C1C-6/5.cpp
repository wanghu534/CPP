#include <iostream>
using namespace std;

long long result = 1;
long long factorial(int n)
{
    result *= n;
    if (n-1 > 0)
    {
        factorial(n-1);
    }
    else
    {
        return result;
    }
}

int digit(long long n)
{
    int sum = 0;
    while (n > 0)
    {
        n /= 10;
        sum++;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    long long result = factorial(n);
    cout << result << ' ' << digit(result);
    return 0;
}