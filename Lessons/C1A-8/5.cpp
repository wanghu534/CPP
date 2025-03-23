#include<iostream>
using namespace std;
int main()
{
    int n, gold = 0, silver = 0, bronze = 0;
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        int tempG, tempS, tempB;
        cin >> tempG >> tempS >> tempB;
        gold += tempG;
        silver += tempS;
        bronze += tempB;
    }
    cout << gold << " " << silver << " " << bronze << " " << gold+silver+bronze;
    return 0;
}