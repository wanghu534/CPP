#include<iostream>
using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;
	int a[m][n];
	int b[m][n];
	
	for (int i = 0; i <= m-1; i++)
	{
		for (int j = 0; j <= n-1; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i <= m-1; i++)
	{
		for (int j = 0; j <= n-1; j++)
		{
			cin >> b[i][j];
		}
	}
	
	int score = 0;
	for (int i = 0; i <= m-1; i++)
	{
		for (int j = 0; j <= n-1; j++)
		{
			if (a[i][j] == b[i][j])
			{
				score++;
			}
		}
	}	
	cout << score;
	return 0;
}