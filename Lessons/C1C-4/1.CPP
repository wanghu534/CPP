#include <iostream>
#include <cstring>
using namespace std;

string str;
int main() {
    cin >> str;
    int sum = 0;
    for (int i = 0; i < 8; i++)
    {
        if (str[i] == '1')
            sum++;
    }
    cout << sum;
    return 0;
}