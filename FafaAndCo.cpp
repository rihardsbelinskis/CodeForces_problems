#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;		// number of employees
	int count = 0;	// ways they can be split

	cin >> n;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			count++;
		}
	}

	cout << count << endl;

	return 0;
}
