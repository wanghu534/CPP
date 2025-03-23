#include<iostream>
using namespace std;

int main()
{
    long long file_number;
    cin >> file_number;
    int number = file_number-(file_number/100*100);
    int temp = file_number-(file_number/10*10);
    int temp2 = number-temp;
    if ((temp2/10)%2 == 0)
        cout << "W";
    else
        cout << "M";
    return 0;
}