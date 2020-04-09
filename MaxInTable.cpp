#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int tab[10][10];	// given by the limits of the problem
	cin >> n;

	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < n; j++) 
		{
			if (i == 0) 
			{
				tab[i][j] = 1;
			} 
			else if (j == 0) 
			{
				tab[i][j] = 1;
			} 
			else {
				tab[i][j] = tab[i-1][j] + tab[i][j-1]; // as given
			}
		}
	}

	cout << tab[n - 1][n - 1] << endl;
	return 0;
}
