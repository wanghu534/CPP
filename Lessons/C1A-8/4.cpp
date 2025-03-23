#include<iostream>
using namespace std;
int main()
{
    int k, result;
    cin >> k;
    int firstNum = 1, secondNum = 1;
    if (k==1 || k==2)
    {
        cout << 1;
        return 0;
    }
    for (int i=3; i<=k; i++)
    {
        result = secondNum + firstNum;
        firstNum = secondNum;
        secondNum = result;
    }
    cout << result;
    return 0;
}