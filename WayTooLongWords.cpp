#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	int TOOLONG = 10;	// to long word
	string s;

	cin >> n;
	while (n--)
	{
		cin >> s;
		if (s.size() > TOOLONG)
		{
			if (!s.empty())
			{
				cout << s[0] << s.size()-2 << s.back() << endl;
			}
		} 
		else 
		{
			cout << s << endl;
		}
	}
	
	return 0;
}
