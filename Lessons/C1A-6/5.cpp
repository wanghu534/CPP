#include<iostream>
using namespace std;

int main()
{
    int length;
    cin >> length;
    double walk_time = length/1.2;
    double ride_bike_time = 27+length/3.0+23;
    if (walk_time > ride_bike_time)
        cout << "Bike";
    else if (ride_bike_time > walk_time)
        cout << "Walk";
    else if (ride_bike_time == walk_time)
        cout << "All";
    return 0;
}