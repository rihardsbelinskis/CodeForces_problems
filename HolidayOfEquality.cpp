#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;		// number of citizens
	int total = 0;
	cin >> n;
	int ar[n];
	for(int i = 0; i < n; i++)
	{
		cin >> ar[i];
	}
	
	sort(ar, ar+n);
	for(int j = 0; j < n; j++)
	{
		total += ar[j];
	}
	cout << ar[n-1]*n-total << endl;
	return 0;
}
