#include <iostream>
#include <cstring>
using namespace std;

char func1(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch - 'a' + 'A';
    }
    else
    {
        return ch;
    }
}
char func2(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch + 'a' - 'A';
    }
    else
    {
        return ch;
    }
}


int main() {
    string str;
    getline(cin, str);
    cout << func1(str[0]);
    for (int i = 1; i < str.length(); i++)
    {
        if (str[i] != ' ' && str[i-1] == ' ')
        {
            cout << func2(str[i]);
        }
    }
    return 0;
}