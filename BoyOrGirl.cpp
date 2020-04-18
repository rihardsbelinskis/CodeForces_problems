#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;		// number of distinct characters
	int k = 0;	// number of repeated characters in the username
	string s;	// input username

	cin >> s;

	unordered_map <char, int> m;
	for (int i = 0; i < s.length(); i++)
	{
		m[s[i]]++;
	}

	if (m.size() % 2 == 0)
	{
		cout << "CHAT WITH HER!" << endl;
	} else {
		cout << "IGNORE HIM!" << endl;
	}
	return 0;
}
