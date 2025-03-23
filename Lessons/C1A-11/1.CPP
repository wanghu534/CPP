#include<iostream>
using namespace std;
int main()
{
    long long x;
    cin >> x;
    if (x%62 == 0)
    {
        cout << "Yes";
        return 0;
    }
    
    int previousNum  = 0, currentNum = 0;
    bool flag = false;
    while (x)
    {
        currentNum = x % 10;
        if (previousNum == 2 && currentNum == 6)
        {
            flag = true;
            break;
        }
        x /= 10;
        previousNum = currentNum;
    }

    if (flag)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}