#include<iostream>
using namespace std;

int main()
{
    int n, oddNumber = 0, evenNumber = 0;
    cin >> n;
    while (n)
    {
        if (n%10%2 == 0)
            evenNumber++;
        else
            oddNumber++;
        n /= 10;
    }
    if (oddNumber > evenNumber)
        cout << "odd features";
    else if (evenNumber > oddNumber)
        cout << "even features";
    else 
        cout << "NULL";
    return 0;
}