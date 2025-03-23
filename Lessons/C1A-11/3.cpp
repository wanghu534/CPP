#include<iostream>
using namespace std;

int main()
{
    int n;
    bool flag = false;
    cin >> n;
    if (n == 1)
        flag = false;
    else
    {
        for (int i = 2; i <=16; i++)
        {
            if (n != i)
            {
                if (n % i == 0)
                {
                    flag = false;
                    break;
                }
                else
                {
                    flag = true;
                }
            }
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else if (!flag)
    {
        cout << "NO" << endl;
    }
    return 0;
}