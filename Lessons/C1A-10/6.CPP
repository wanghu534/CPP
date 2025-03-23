#include<iostream>
using namespace std;

int main()
{
    int n, singleNum, tenNum, hundredNum, thousandNum, AB, CD;
    cin >> n;
    for (int i = 1000; i <= n; i++)
    {
        singleNum = i % 10;
        tenNum = (i / 10) % 10;
        hundredNum = (i / 100) % 10;
        thousandNum = i / 1000;
        AB = thousandNum*10 + hundredNum;
        CD = tenNum*10 + singleNum;
        if ((AB+CD)*(AB+CD) == i)
            cout << i << endl;
    }
    return 0;
}