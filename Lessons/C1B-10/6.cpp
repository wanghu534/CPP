#include <iostream>
#include <string>
using namespace std;

string str;
int main() {
    cin >> str;
    for (int i = 0; i <= str.size()-1; i++)
    {
        switch (str[i])
        {
        case 'T':
            cout << 'A';
            break;
        case 'A':
            cout << 'T';
            break;  
        case 'G':
            cout << 'C';
            break;   
        case 'C':
            cout << 'G';
            break;
        }
    }
    return 0;
}