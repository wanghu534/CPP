#include<iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if (x%100 == 0 && x%400 == 0 || x%100 != 0 && x%4 == 0)
    {
        switch (y)
        {
            case 4:;
            case 6:;
            case 9:;
            case 11:cout << 30;break;
            case 2:cout << 29;break;    
            default:cout << 31;break; 
        }
    }
    else
    {
        switch (y)
        {
            case 4:;
            case 6:;
            case 9:;
            case 11:cout << 30;break;   
            case 2:cout << 28;break;    
            default:cout << 31;break; 
        }
    }
}