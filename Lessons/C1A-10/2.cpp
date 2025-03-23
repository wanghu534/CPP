#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    string flag;
    int aNum = 0, bNum = 0, cNum = 0, total = 0;
    int person;
    while (cin >> person)
    {
        switch (person)
        {
            case 1: aNum++; break;
            case 2: bNum++; break;
            case 3: cNum++;
        }
        if (person == -1)
            break;
    }
    total = aNum + bNum + cNum;
    if (aNum > ceil(total / 2.0))
        flag = "A-yes";
    else if (bNum > ceil(total / 2.0))
        flag = "B-yes";
    else if (cNum > floor(total / 2.0))
        flag = "C-yes";
    else
        flag = "all-NO";

    cout << "A=" << aNum << endl
         << "B=" << bNum << endl
         << "C=" << cNum << endl
         << "Tot=" << total << endl
         << flag << endl;


    return 0;
}