#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int a, b; // weights of Limak and Bob	
	cin >> a >> b;	// input weights of both brothers
	int years = 0;
	while (a <= b) {
		a = 3*a;
		b = 2*b;
		years++;
	}

	cout << years << endl;
	return 0;
}
