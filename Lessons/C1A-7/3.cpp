#include<iostream>
using namespace std;

int main()
{
    int a, b;
    int result;
    char ch;
    cin >> a >> b >> ch;
    switch (ch)
    {
    case '+':
        result = a+b;
        cout << result << endl;
        break;
    case '-':
        result = a-b;
        cout << result << endl;
        break;
    case '*':
        result = a*b;
        cout << result << endl;
        break;
    case '/':
        result = a/b;
        cout << result << endl;
        break;
    default:
        cout << "Invalid operator" << endl;
        break;
    }
    return 0;
}