// 分数相加
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

string Aa, Ab, Ba, Bb;
int main() {
    getline(cin, Aa, '/');
    getline(cin, Ab, '\n');
    getline(cin, Ba, '/');
    getline(cin, Bb, '\n');

    int numerator, denominator;
    if (Ab == Bb)
    {
        numerator = stoi(Aa) + stoi(Ba);
        if (numerator % stoi(Ab) == 0)
            cout << numerator / stoi(Ab) << endl;
        else
            cout << numerator << "/" << stoi(Ab) << endl;
        return 0;
    }
    else
    {
        denominator = stoi(Ab) * stoi(Bb);
        numerator = denominator/stoi(Ab) * stoi(Aa) + denominator/stoi(Bb) * stoi(Ba);
        for (int i = 2; i <= min(denominator, numerator); i++)
        {
            if (numerator % i == 0 && denominator % i == 0)
            {
                numerator /= i;
                denominator /= i;
                i--;
            }
        }
        cout << numerator << '/' << denominator << endl;
    }

    return 0;
}