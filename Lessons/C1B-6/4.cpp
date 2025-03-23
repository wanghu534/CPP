#include <iostream>
using namespace std;

int arr[1001];
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr[temp]++;
    }

    for (int i = 0; i < 1001; i++)
    {
        // if (arr[i] > 0)
        // {
        //     for (int j = 0; j < arr[i]; j++)
        //         cout << i << endl;
        // }
        while (arr[i] > 0)
        {
            cout << i << endl;
            arr[i]--;
        }
    }
    return 0;
}