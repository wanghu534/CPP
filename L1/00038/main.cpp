#include<iostream>
#include<list>
using namespace std;

int main()
{
    
    for (int i=1; i<=10000; ++i)
    {
        // cout << i << " ";
        list<int> l;
        for (int j=1; j<i; j++)
        {
            if (i%j == 0)
                l.push_back(j);
        }
        int result = 0;
        for (int k:l)
        {
            result += k;
        }
        if (result == i)
            cout << i << " ";
    }
    return 0;
}