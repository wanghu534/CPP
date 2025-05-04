#include <iostream>
#include <cstring>
using namespace std;

char s[11000];
char ch;
int main() {
    cin >> s >> ch;
    for (int i = 0; i <= strlen(s)-1; i++)
    {
        if (s[i] == ch)
        {
            cout << i << ' ';
        }
    }
    return 0;
}