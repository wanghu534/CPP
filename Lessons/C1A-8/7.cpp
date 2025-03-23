#include<iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    int oneTimes=0, fiveTimes = 0, tenTimes = 0;
    for (int i=1; i<=k; i++)
    {
        int n;
        cin >> n;
        if (n==1)
            oneTimes++;
        else if (n==5)
            fiveTimes++;
        else if (n==10)
            tenTimes++;
    }
    cout << oneTimes << endl
         << fiveTimes << endl
         << tenTimes << endl;

    return 0;
}