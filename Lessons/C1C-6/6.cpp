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

int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        result = 1;
        sum += factorial(i);
    }
    cout << sum;
    return 0;
}