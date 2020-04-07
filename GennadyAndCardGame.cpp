#include <bits/stdc++.h>

using namespace std;

int main()
{
	string my_cards, table_card;
	bool y = true;

	cin >> table_card;

	for (int i = 0; i < 5; i++)
	{
		cin >> my_cards;

		if (my_cards[0] == table_card[0] || my_cards[1] == table_card[1])
		{
			y = true;
		} else {
			y = false;
		}
	}
	if (y == true) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}
