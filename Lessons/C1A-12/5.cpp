#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int maxNum = 0, maxPreviousNum = 0, currentNum = 0;

    int temp1 = n % 10;
    n /= 10;
    int temp2 = n % 10;
    n /= 10;

    maxNum = max(temp1, temp2);
    maxPreviousNum = min(temp1, temp2);

    while (n)
    {
        currentNum = n % 10;
        if (currentNum > maxNum)
        {
            maxPreviousNum = maxNum;
            maxNum = currentNum;
        }
        else if (currentNum > maxPreviousNum)
        {
            if (currentNum < maxNum || n/10 == 0)
                maxPreviousNum = currentNum;
            
        }
        n /= 10;
    }
    cout << maxNum + maxPreviousNum << endl;
    return 0;
}