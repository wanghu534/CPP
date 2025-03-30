// 信号转换
#include <iostream>
#include <cstring>
using namespace std;

char a[510];
int main() {
    cin >> a;
    for (int i = 0; i < strlen(a); i++) {
        switch (a[i])
        {
        case 'A':
            a[i] = '1';
            break;
        case 'B':
            a[i] = '2';
            break;
        case 'C':
            a[i] = '@';
            break;
        case 'D':
            a[i] = '\n';
            break;
        }
        cout << a[i];
    }
    return 0;
}