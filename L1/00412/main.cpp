#include<iostream>
#include<iomanip>

int main()
{
    double x;
    std::cin >> x;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << x-(int)x << std::endl;
    return 0;
}