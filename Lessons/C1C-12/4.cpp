// 判断质数
#include <iostream>
using namespace std;

bool isPrime(int num)
{
    if (num == 1)
    {
        return false;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, num = 0;
    cin >> n;

    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (isPrime(temp))
        {
            num++;
            // cout << temp << endl;
        }
    }
    cout << num;
    return 0;
}