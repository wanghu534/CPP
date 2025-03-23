#include<iostream>
using namespace std;
int main()
{
    int k, n, w; //k 第一包猫粮的价格，n 初始的钱，w 买的猫粮数量
    cin >> k >> n >> w;

    int money = 0;
    for (int i = 1; i <= w; i++)
    {
        money += k * i; //买第i包猫粮需要花的钱
    }
    int change = n - money; //买完猫粮后剩下的钱
    if (change < 0)
        cout << -change << endl;
    else if (change >= 0)
        cout << 0 << endl;
    return 0;
}