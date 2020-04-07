#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; // number of sentences
	int output;
	string s; // the actual sentence

	cin >> n;
	while(n--)
	{
		cin >> s;
		for (int j = 0; j < s.size(); j++)
		{
			if (s[j]  == 'o' && s[j-1] == 'p')
			
			{
				output = 1;
			} else if (s[j] == 'u' && s[j-1] == 's' && s[j-2] == 'e' && s[j-3] == 'd') 
			{
				output = 2;
			} else if (s[j] == 'a' && s[j-1] == 'd' && s[j-2] == 'i' && s[j-3] == 'n' && s[j-4] == 'm')
			{
				output = 3;
			} else if (s[j] == 'u' && s[j-1] == 's' && s[j-2] == 'a' && s[j-3] == 'm') 
			{
				output = 4;
			}	
		}

		if (output == 1)
		{
			cout << "FILIPINO" << endl;
		} else if (output == 2 || output == 4) 
		{
			cout << "JAPANESE" << endl;
		} else if (output == 3)
		{
			cout << "KOREAN" << endl;
		} 
	}


	return 0;
}
