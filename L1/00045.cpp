#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    
    int currentNum, sum = 0;
    for (int i = 1; i<=n; i++)
    {
        if (i % 7 == 0)
            continue;
        else
        {
            int flag = false;
            currentNum = i;
            while (currentNum)
            {
                if (currentNum % 10 == 7)
                    flag = true;
                currentNum /= 10;
            }
            if (flag)
                continue;
        }

        sum += i*i;
    }
    cout << sum << endl;
    return 0;
}