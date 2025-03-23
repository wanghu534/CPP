#include<iostream>
using namespace std;
int main()
{
    int result;
    for (int i=1; i<=100; i++)
    {
        if (i%7 != 0)
        {
            cout << i << " ";
            result += i;
        }
    }
    cout << endl;
    cout << result << endl;
    return 0;
}