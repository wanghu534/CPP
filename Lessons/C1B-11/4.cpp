// 猫猫与密信
#include <iostream>
using namespace std;

string str;
int main() {
    getline(cin, str);
    string a[5] = {"lov", "loe", "lve", "ove"};
    int result, flag = false;

    for (int i = 0; i < 4; i++)
    {   
        // cout << a[i] << endl;
        result = str.find(a[i]);
        // cout << result << endl;
        if (result >= 0)
        {
            flag = true;
            break;
        }
    }


    if (flag)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}