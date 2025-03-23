#include<iostream>
using namespace std;
int main()
{
    double weight;
    cin >> weight;
    if (115 <= weight && weight <= 125)
        cout << "qualified";
    else
        cout << "unqualified";

    return 0;
}