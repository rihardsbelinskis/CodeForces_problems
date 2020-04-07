#include <bits/stdc++.h>
#include <iostream>
#include <climits>

using namespace std;

int main()
{
	int n; 
	int f = 0;
        int s = 0;
	string output;

	//cin >> n;
	//char flights[n];
	//cin.getline(flights, n);

	cin >> n; 
	cin.ignore(INT_MAX, '\n'); 
	char flights[n]; 
	cin.getline(flights, n);

	for (int i = 0; i < strlen(flights); i++)
	{
		if (flights[i] == 'F')
		{
			s++;
		} else if (flights[i] == 'S')
		{
			f++;
		}
	}
	//f = count(flights.begin(), flights.end(), 'F');
	//s = count(flights.begin(), flights.end(), 'S');

	if (s > f || n == 2) 
	{
		output = "YES";
	} else {
		output = "NO";
	}
	cout << output << endl;
	return 0;
}
