#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m, k; // n participants, m pens, k notebooks
	
	cin >> n >> m >> k;

	if (m >= n && k >= n)
	{
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}

	return 0;
}
