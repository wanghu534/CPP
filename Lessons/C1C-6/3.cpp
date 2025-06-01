#include <iostream>
#include <cstring>
using namespace std;

int arr[1000] = {0};

void prime()
{
    int index = 0;
    for (int i = 3; i <= 1000; i += 2) {
        bool flag = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                flag = false;
                break;
            }
        }
        if (flag) {
            arr[index] = i;
            index++;
        }
    }
}

int main() {
    prime();
    for (int i = 0; i < 1000; i++)
    {
        if (arr[i] > 0)
        {
            if (arr[i+1] - arr[i] == 2)
            {
                cout << '(' << arr[i] << ',' << arr[i+1] << ')' << endl;
            }
        }
    }
    return 0;
}