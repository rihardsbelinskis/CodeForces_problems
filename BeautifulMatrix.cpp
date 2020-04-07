#include<bits/stdc++.h>
using namespace std;

int main()
{
	int moves;	// number of moves
	int number;	// the number '1'
	
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			cin >> number;
			if (number == 1)
			{
				moves = abs(i - 3) + abs(j - 3); // number '1' is located MAX 3 units away from the center in i and j directions
			}
		}
	}

	cout << moves << endl;
	return 0;
}
