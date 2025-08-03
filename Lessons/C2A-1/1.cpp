// 肥宅和肥成的战争
#include <iostream>
using namespace std;

int main() {
    int a, b, time = 0;
    cin >> a >> b;

    int flag = 0;
    while (a > 0 && b > 0)
    {
        time++;
        if (flag == 0)
        {
            a -= 3;
        }
        else if (flag == 1)
        {
            b -= 5;
        }

        if (flag == 0)
        {
            flag = 1;
        }
        else if (flag == 1)
        {
            flag = 0;
        }
    }
    
    cout << time;
    return 0;
}