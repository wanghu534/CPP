#include<iostream>
using namespace std;

int main()
{
    int n, abba = 1000;
    bool flag = false;
    cin >> n;

    int singleNum;
    int tenNum;
    int hundredNum;
    int thousandNum;
    while (abba < n || flag == false)
    {
        abba += 1;
        singleNum = abba % 10;
        tenNum = abba / 10 % 10;
        hundredNum = abba / 100 % 10;
        thousandNum = abba / 1000;
        if (thousandNum == singleNum && hundredNum == tenNum && singleNum != tenNum)
            flag = true;
        else
            flag = false;
    }
    cout << abba;
    return 0;
}