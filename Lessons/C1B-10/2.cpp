#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string originalStr;
string translateStr;
int main() {
    cin >> originalStr;
    cin >> translateStr;
    reverse(originalStr.begin(), originalStr.end());

    if (translateStr == originalStr)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}