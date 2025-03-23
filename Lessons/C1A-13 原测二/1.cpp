#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int threeFlag = (n%3 == 0);
    int fiveFlag = (n%5 == 0);
    int sevenFlag = (n%7 == 0);
    if (threeFlag)
    {
        if (fiveFlag)
        {
            if (sevenFlag)
                cout << "3 5 7";
            else 
                cout << "3 5";
        }
        else if (sevenFlag)
            cout << "3 7";
        else
            cout << "3";
    }
    else if (fiveFlag)
    {
        if (sevenFlag)
            cout << "5 7";
        else
            cout << "5";
    }
    else if (sevenFlag)
        cout << "7";
    else
        cout << 'n';
    return 0;
}