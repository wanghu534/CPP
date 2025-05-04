// #include <iostream>
// #include <cstdio>
// using namespace std;

// int Xpos[102000];
// int main() {
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &Xpos[i]);
//     }


//     int minNum, maxNum;
//     for (int i = 0; i < n; i++)
//     {
//         minNum = 0, maxNum = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (Xpos[j] == Xpos[i])
//                 continue;
//             int longth = Xpos[j]-Xpos[i];
//             if (longth < 0)
//                 longth = -longth;
//             // cout << longth << endl;
//             if (minNum == 0 && maxNum == 0)
//             {
//                 minNum = longth;
//                 maxNum = longth;
//             }
//             else
//             {
//                 if (longth < minNum)
//                 {
//                     minNum = longth;
//                 }  
//                 if (longth > maxNum)
//                     maxNum = longth;
//             }
//         }
//         cout << minNum << " " << maxNum << endl;

//     }
//     return 0;
// }
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int arr[100000+5];
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            cout << arr[2]-arr[1] << " " << arr[n]-arr[1] << endl;
        }
    
        int minn = min(arr[i+1]-arr[i], arr[i]-arr[i-1]);
        int maxn = max(arr[i]-arr[1], arr[n]-arr[i]);
        cout << minn << " " << maxn << endl;
    
        if (i == n) {
            cout << arr[n]-arr[n-1] << " " << arr[n]-arr[1] << endl;
        }
    }
    return 0;
}