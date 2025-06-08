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

int main() {
    int a, b;
    cin >> a >> b;

    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            sum += i;
        }
    }
    cout << sum;
    return 0;
}