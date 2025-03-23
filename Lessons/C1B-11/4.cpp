// 猫猫与密信
#include <iostream>
using namespace std;

string str;
int main() {
    getline(cin, str);
    char a[5] = {'l', 'o', 'v', 'e'};

    int result, sum = 0;
    for (int i = 0; i < 4; i++) {
        result = str.find(a[i]);
        cout << result << endl;
        if (result)
        {
            if (i == 0)
            {
                if (str[result+1] == a[i+1])
                {
                    sum++;
                }
            }
            else if (i == 3)
            {
                if (str[result-1] == a[i-1])
                {   
                    sum++;
                }
            }
            else if (i > 0 && i < 3)
            {
                if (str[result-1] == a[i-1] && str[result+1] == a[i+1])
                {
                    sum++;
                }
            }
        }
    }
    cout << sum;
    return 0;
}