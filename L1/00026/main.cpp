#include<iostream>
using namespace std;
int main()
{
    int Chinese, Math, English;
    cin >> Chinese >> Math >> English;
    if (Chinese == 100)
    {
        if (Math == 100)
            cout << "YES";
        else if (English == 100)
            cout << "YES";
    }
    else if (Math == 100 && English == 100)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}