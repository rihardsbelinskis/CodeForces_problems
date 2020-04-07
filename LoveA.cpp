#include<bits/stdc++.h>
using namespace std;

int main()
{
	int count = 0;
	bool good = false;
	int output;
	string s;

	cin >> s;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'a')
		{
			count++;
		}
	}
	if (count <= (s.size()/2))
	{
		good = false;
	} else {
		good = true;
	}

	if (good) 
	{
		output = s.size();
	} else {
		output = count * 2 - 1; 
	}

	cout << output << endl;
	return 0;
}
