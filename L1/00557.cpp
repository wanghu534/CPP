#include<iostream>
using namespace std;
int main()
{
    int h, w;
    cin >> h >> w;
    long long result = h*w;
    long long  singleDigitNumber = result-result/10*10;
    long long  tenDigitNumber = result/10-result/100*10;
    // cout << singleDigitNumber << endl;
    // cout << tenDigitNumber << endl;
    long long  answer = singleDigitNumber+tenDigitNumber;
    cout << answer << endl;
    return 0;
}