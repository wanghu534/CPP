#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n < 5)
    {
        if (n == 4)
        {
            cout << "IV";
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << "I";
            }
        }
    }
    else if (n >= 5 && n <= 10)
    {
        if (n == 9)
        {
            cout << "IX";
        }
        else if (n == 10)
        {
            cout << "X";
        }
        else
        {
            cout << "V";
            for (int i = 0; i < n-5; i++)
            {
                cout << "I";
            }
        }
    }
    return 0;
}