#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[70][70];

    int number = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
        {
            number = n*i + 1;
            for (int j = 0; j < n; j++)
            {
                a[i][j] = number;
                number++;
            }
        }
        else if (i % 2 != 0)
        {
            number = (i+1)*n;
            for (int j = 0; j < n; j++)
            {
                a[i][j] = number;
                number--;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}