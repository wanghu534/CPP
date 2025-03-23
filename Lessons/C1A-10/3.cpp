#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n, s, t;
        cin >> n >> s >> t;
        int StickersAndToys = s+t-n; // 5+7-10 = 2
        int onlyStickers = s-StickersAndToys;// 5-2 = 3
        int onlyToys = t-StickersAndToys;// 7-2 = 5
        cout << max(onlyToys, onlyStickers)+1 << endl;
    }
    return 0;
}