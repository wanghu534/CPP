#include <iostream>
using namespace std;

int main()
{
    int time = 60;
    int length = 1;

    float xiaocaiji_length = 0;
    float dacaiji_length = 1;
    
    for (int i = 0; i<60; ++i)
    {
        xiaocaiji_length += 0.01;
    }

    for (int j = 0; j<100; ++j)
    {
        xiaocaiji_length += 0.01;
        dacaiji_length -= 0.01;
        // cout << xiaocaiji_length << endl;
        // cout << dacaiji_length << endl;

        if (abs((xiaocaiji_length - dacaiji_length)) < 0.0001)
        {
            cout << "same";
        }

    }
}