#include<iostream>
#include<algorithm>
using namespace std;
int arr[10005];
int main() {
    for (int i = 1; i <= 10; i++) {
        cin>>arr[i];
    }

    int x;
    cin >> x;

    for (int i = 10; i >= 8; i--) {
    arr[i+1]= arr[i];
    }

    for (int i=1;i<=11;i++) {
        cout<<arr[i]<<"";
    }

    return 0;
}