// 好学生
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int minNum;
    bool flag = false;
    for (int i = 0; i < n; i++) {
        int temp, temp2;
        cin >> temp2 >> temp;
        if (flag == false)
        {
            minNum = temp;
            flag = true;
        }
        else if (temp < minNum)
        {
            minNum = temp;
        }
    }

    cout << minNum;
    return 0;
}