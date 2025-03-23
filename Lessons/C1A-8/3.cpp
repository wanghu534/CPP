#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int minNum = 0, maxNum = 0;
    for (int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        if (i==0)
        {
            minNum = x;
            maxNum = x;
        }
        if (x>maxNum)
        {
            maxNum = x;
        }
        if (x<minNum)
        {
            if (x>minNum);
            else if(x<minNum)
            {
                minNum = x;
            }
        }
    }
    cout << maxNum-minNum<<endl;
    return 0;
}