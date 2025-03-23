#include <iostream>
using namespace std;
int main() {
    bool flag;
    for (int i = 2; i <= 100; i++)
    {
        flag = true;
        for (int j = 2; j <= i; j++)
        {
            if (i != j)
            {
                if (i % j == 0)
                    flag = false;
            }
        }
        if (flag)
            cout << i << " ";
    }
    return 0;
}