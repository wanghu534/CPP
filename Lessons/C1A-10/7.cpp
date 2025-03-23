#include<iostream>
using namespace std;
int main()
{
    int n, oddNum=0, evenNum=0, temp;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {   
        cin >> temp;
        if (temp%2 == 0 && temp > evenNum)
            evenNum = temp;
        else if (temp%2 != 0 && temp > oddNum)
            oddNum = temp;
    }
    cout << evenNum << endl
         << oddNum << endl;
    return 0;
}