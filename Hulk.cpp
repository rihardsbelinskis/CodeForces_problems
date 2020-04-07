#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, i;	// number of layers (1 <= n <= 100)
	cin >> n;
	
	for(i = 1; i < n; i++) {	// while the number can still be divided
		if(i%2 == 1) {		// divide it by 2 and see if it doesn't exactly divide
			cout << "I hate that ";
		} else {		// if it does exactly divide
			cout << "I love that ";
		}
	}
	if (n%2 == 1) {			// divide the layers by 2, see if doesn't exactly divide
		cout << "I hate it\n";
	}
	if (n%2 == 0) {			// if the layers number does exactly divide
		cout << "I love it\n";
	}
	return 0;
}
