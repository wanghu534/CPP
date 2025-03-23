#include<iostream>
using namespace std;

int main()
{   
    int n, sum=0, temp;
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        if (i % 5 == 0)
        {
            temp = i;
            while (temp)
            {
                if (temp%10 == 5)
                {
                    sum++;
                    break;
                }
                temp /= 10;
            }
        }
    }
    cout << sum << endl;
    return 0;
}
