#include<iostream>
using namespace std;

int main()
{
    long long file_number;
    cin >> file_number;
    int last_number = file_number - (file_number/10*10);
    if (last_number%2 == 0)
        cout << "W";
    else
        cout << "M";
    return 0;
}