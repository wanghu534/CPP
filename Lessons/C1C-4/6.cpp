#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string str;
    cin >> str;
    int a = 0, b = 0, c = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if ('a' <= str[i] && str[i] <= 'z' || 'A' <= str[i] && str[i] <= 'Z')
            a++;
        else if ('0' <= str[i] && str[i] <= '9')
            b++;
        else if (str[i] != '?')
            c++;
    }
    cout << a << endl 
         << b << endl
         << c << endl;
    return 0;
}