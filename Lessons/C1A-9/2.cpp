#include<iostream>
using namespace std;

int a, n = 0;
int main()
{
	cin >> a;
	while (a)
	{
		cout << n << endl
			 << n*10 << a%10;
		n = n*10 + a%10;

		a /= 10;
	}
	cout << n << endl;
	return 0;
}
