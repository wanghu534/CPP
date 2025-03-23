#include <iostream>
#include <string>
using namespace std;

string str;
int main() {
    getline(cin, str);
    for (int i = 0; i <= str.size()-1; i++)
    {
        if (str[i] >= 'A' && str[i] < 'Z' || str[i] >= 'a' && str[i] < 'z')
        {
            str[i]++;
        }
        else if (str[i] == 'z' or str[i] == 'Z')
        {
            str[i] -= 25;
        }
    }
    cout << str;
    return 0;
}