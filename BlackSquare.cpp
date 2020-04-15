#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int a[5];
        int ans = 0;

	for (int i = 1; i <= 4; i++)
	{
		cin >> a[i];
	}
	cin >> s;
	
	for (int i = 0; i < s.size(); i++)
	{
		ans += a[s[i] - '0'];
	}
	cout << ans << endl;
	return 0;
}
