#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

struct Drink
{
    string name;
    int price;
    int month;
    int day;
};

bool compare(Drink a, Drink b) {
    if (a.month != b.month)
        return a.month < b.month;
    else if (a.day != b.day)
        return a.day < b.day;
    else if (a.price != b.price)
        return a.price < b.price;
    else
        return a.name.size() < b.name.size();
}

int main() {
    int n;
    cin >> n;
    Drink drinks[n];
    for (int i = 0; i < n; i++) {
        string dataOfproduction;
        cin >> drinks[i].name >> drinks[i].price >> dataOfproduction;
        for (int j = 0; j < dataOfproduction.size(); j++)
        {
            if (dataOfproduction[j] == '-') {
                drinks[i].month = stoi(dataOfproduction.substr(0, j));
                drinks[i].day = stoi(dataOfproduction.substr(j + 1, dataOfproduction.size()-1));
            }
        }
    }
    sort(drinks, drinks+n, compare);
    for (int i = 0; i < n; i++) {
        cout << drinks[i].name << " " << drinks[i].price << " " << drinks[i].month << "-" << drinks[i].day << endl;
    }
    
    return 0;
}