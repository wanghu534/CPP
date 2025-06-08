#include <iostream>
#include <cstring>
using namespace std;

string str;

int main() {
    getline(cin, str);
    int flag = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '"')
        {
            if (flag == 0)
            {
                str[i] = '(';
                flag = 1;
            }
            else if (flag == 1)
            {
                str[i] = ')';
                flag = 0;
            }
        }
        cout << str[i];
    }
    
    return 0;
}