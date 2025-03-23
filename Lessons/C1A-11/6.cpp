#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        bool twoFlag = (i % 2 == 0);
        bool threeFlag = (i % 3 == 0);
        bool fiveFlag = (i % 5 == 0);
        bool sevenFlag = (i % 7 == 0);
        if (twoFlag && threeFlag && fiveFlag || twoFlag && threeFlag && sevenFlag || twoFlag && fiveFlag && sevenFlag || threeFlag && fiveFlag && sevenFlag)
            ;
        else if (twoFlag && threeFlag || twoFlag && fiveFlag || twoFlag && sevenFlag || threeFlag && fiveFlag || threeFlag && sevenFlag || fiveFlag && sevenFlag)
        {
            cout << i << " ";
        }
    }
    return 0;
}