#include<iostream>
using namespace std;

int m, k;
bool flag = false;
int main()
{
    cin >> m >> k;
    if (m % 19 == 0)
    {
        int result = 0;
        while (m)
        {
            if (m%10 == 3)
                result++;
            m /= 10;
        }
        if (result == k)
            flag = true;
    }

    if (flag)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}