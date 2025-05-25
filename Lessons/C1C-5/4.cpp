#include <iostream>
using namespace std;

int func()
{
    int sum = 0;
    for (int i = 2; i <= 100; i++)
    {
        bool flag = true;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0 && j != 1 && i != j)
            {
                flag = false;
            }
        }
        if (flag)
        {
            sum += i;
        }
    }
    return sum;
}

int main() {
    cout << func();
    return 0;
}