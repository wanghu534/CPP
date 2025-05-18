#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[220][220] = {0};

    int j = 0;
    for(int i = 0; i < 2*n-1; i++){
        a[i][j] = 1;
        j++;
    }

    j = 0;
    for (int i = 2*n-1-1; i >= 0; i--)
    {
        a[i][j] = 1;
        j++;
        // cout << i << " " << j << endl;
    }

    for (int i = 0; i < 2*n-1; i++)
    {
        for (int j = 0; j < 2*n-1; j++)
        {
            switch (a[i][j])
            {
                case 1:
                    cout << "X";
                    break;
                case 0:
                    cout << " ";
                    break;
            }
        }
        cout << endl;
    }
    return 0;
}