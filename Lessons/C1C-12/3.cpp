// 字符替换
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++) {
        switch (s[i])
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                s[i] -= 'a'-'A';
        }
        cout << s[i];
    }
    return 0;
}