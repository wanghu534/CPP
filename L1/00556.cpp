#include<iostream>
using namespace std;

int main()
{
    int theSumOfNumbers, theDifferenceInNumbers, a, b;
    cin >> theSumOfNumbers >> theDifferenceInNumbers;
    a = (theSumOfNumbers + theDifferenceInNumbers) / 2;
    b = theSumOfNumbers-a;
    cout << a << " " << b << endl;
    return 0;
}