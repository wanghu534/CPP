#include <iostream>
using namespace std;
int main() {
    int L, R, result = 0;
    cin >> L >> R;

    int temp;
    for (int i = L; i <= R; i++)
    {
        temp = i;
        while (temp)
        {
            if (temp % 10 == 2)
            {
                result++;
            }
            temp /= 10;
        }
    }
    cout << result << endl;
    return 0;
}