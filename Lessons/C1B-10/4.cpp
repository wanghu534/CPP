#include <iostream>
#include <string>
using namespace std;

string str;
int main() {
    cin >> str;

    string s;
    cin >> s;
    // cout << str.find(s) << endl;
    if (str.find(s)+1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}