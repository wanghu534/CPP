#include <iostream>
using namespace std;

int main() {
    int arr[10][10] = {0};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int flag1 = 1;
            int flag2 = 1;
            for (int m = 0; m < 5; m++)
            {
                if (arr[m][j] < arr[i][j] && arr[i][j] != arr[m][j])
                {
                    flag1--;
                }
            }
            for (int n = 0; n < 5; n++)
            {
                if (arr[i][n] > arr[i][j] && arr[i][j] != arr[i][n])
                {
                    flag2--;
                }
            }
            if (flag1 == 1 && flag2 == 1)
            {
                cout << i+1 << " " << j+1 << " " << arr[i][j];
                return 0;
            }
        }
    }
    cout << "not found";
    return 0;
}