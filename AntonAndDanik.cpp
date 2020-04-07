#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;		// number of games played
	int anton = 0;	// score for anton
	int danik = 0;	// score for danik
	string s;	// game result string

	cin >> n;
	cin >> s;

	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'A')
		{
			anton++;
		} else if (s[i] == 'D')
		{
			danik++;
		} else {
			cout << "Incorrect input" << endl;
			break;
		}
	}
	if (anton > danik)
	{
		cout << "Anton" << endl;
	} else if (anton < danik)
	{
		cout << "Danik" << endl;
	} else {
		cout << "Friendship" << endl;
	}
	return 0;
}
