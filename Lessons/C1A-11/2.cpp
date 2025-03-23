#include<iostream>
using namespace std;
int main()
{
    int y, firstN, secondN, thirdN, fourthN;
    bool flag = false;
    cin >> y;

    while (not flag)
    {
        ++y;
        firstN = y/1000;
        secondN = y/100 - firstN*10;
        thirdN = y/10 - firstN*100 - secondN*10;
        fourthN = y - firstN*1000 - secondN*100 - thirdN*10;
        if (firstN != secondN && firstN != thirdN && firstN != fourthN && secondN != thirdN && secondN != fourthN && thirdN != fourthN)
            flag = true;
    }
    cout << y << endl;
    return 0;
}

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     int y;
//     cin >> y;
//     for (int i = y+1; i<=9000; i++)
//     {
//         int ge = i%10;
//         int shi = i/10 %10;
//         int bai = i/100 %10;
//         int qian = i/1000;
//         if (ge!=shi && ge!=bai && ge!=qian && shi!=bai && shi!=qian && bai!=qian)
//         {
//             cout << i << endl;
//             break;
//     }
// }